#include "FpgaObj.h"

#include <iostream>
#include <iomanip>
#include <memory>
#include <stdio.h>

#include "timing.h"

template <class T, class U>
FpgaObj<T, U>::FpgaObj(int kernInputSize, int kernOutputSize, int numCU, int numThreads, int numEpochs): 
        _kernInputSize(kernInputSize),
        _kernOutputSize(kernOutputSize),
        _numCU(numCU),
        _numThreads(numThreads),
        ikern(0), 
        ithr(0),
        _numEpochs(numEpochs) {

    source_in.reserve(_kernInputSize * _numCU * _numThreads);
    source_hw_results.reserve(_kernOutputSize * _numCU * _numThreads);
    isFirstRun.reserve(_numCU * _numThreads);

    std::vector<std::mutex> tmp_mtxi(_numCU * _numThreads);
    mtxi.swap(tmp_mtxi);
    
    for(int j = 0 ; j < _kernInputSize * _numCU * _numThreads ; j++){
        source_in[j] = 0;
    }
    for(int j = 0 ; j < _kernOutputSize * _numCU * _numThreads ; j++){
        source_hw_results[j] = 0;
    }
    for (int j = 0 ; j < _numCU * _numThreads ; j++){
        isFirstRun.push_back(true);
    }
}

template <class T, class U>
void FpgaObj<T, U>::initializeOpenCL(std::vector<cl::Device> &devices, cl::Program::Binaries &bins) {
    // Create OpenCL device and context
    devices.resize(1);
    cl::Device clDevice = devices[0];
    std::string device_name = clDevice.getInfo<CL_DEVICE_NAME>(); 
    std::cout << "Found Device=" << device_name.c_str() << std::endl;

    cl::Context tmp_context(clDevice);
    context = tmp_context;

    // Create OpenCL program from binary file
    cl::Program tmp_program(context, devices, bins);
    program = tmp_program;

    // Create a OpenCL command queue for each compute unit
    for (int i = 0; i < _numCU; i++) {
        cl::CommandQueue q_tmp(context, clDevice, CL_QUEUE_PROFILING_ENABLE | CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE);
        q.push_back(q_tmp);
    }

    for (int ib = 0; ib < _numThreads; ib++) {
        for (int i = 1; i <= _numCU; i++) {
            // Create virtual kernel objects
            std::string cu_id = std::to_string(i);
            std::string krnl_name_full = "kernel_wrapper:{kernel_wrapper_" + cu_id + "}";  // This is Xilinx's format for specifying the Compute Unit a virtual kernel uses
            printf("Creating virtual kernel object in Thread %d for Compute Unit %d\n", ib, i);
            cl::Kernel krnl_tmp = cl::Kernel(program, krnl_name_full.c_str(), &err);
            krnl_xil.push_back(krnl_tmp);

            // Create Event objects
            cl::Event tmp_write = cl::Event();
            cl::Event tmp_kern = cl::Event();
            cl::Event tmp_read = cl::Event();
            write_event.push_back(tmp_write);
            kern_event.push_back(tmp_kern);
            read_event.push_back(tmp_read);

            std::vector<cl::Event> tmp_write_vec;
            std::vector<cl::Event> tmp_kern_vec;
            tmp_write_vec.reserve(1);
            tmp_kern_vec.reserve(1);
            writeList.push_back(tmp_write_vec);
            kernList.push_back(tmp_kern_vec);
        }
    }
}

template <class T, class U>
std::pair<int,bool> FpgaObj<T, U>::get_info_lock() {
    int i;
    bool first;
    mtx.lock();
    i = ikern++;
    if (ikern == _numCU * _numThreads) {
        ikern = 0;
    }
    first = isFirstRun[i];
    if (first) {
        isFirstRun[i] = false;
    }
    mtx.unlock();
    return std::make_pair(i,first);
}

template <class T, class U>
void FpgaObj<T, U>::get_ilock(int ik) {
    mtxi[ik].lock();
}

template <class T, class U>
void FpgaObj<T, U>::release_ilock(int ik) {
    mtxi[ik].unlock();
}

template <class T, class U>
void FpgaObj<T, U>::write_ss_safe(std::string newss) {
    smtx.lock();
    ss << "Thread " << ithr << "\n" << newss << "\n";
    ithr++;
    smtx.unlock();
}

template <class T, class U>
void FpgaObj<T, U>::finishRun() {
    for (int i = 0 ; i < _numCU ; i++){
        OCL_CHECK(err, err = q[i].finish());
    }
}

template <class T, class U>
std::stringstream FpgaObj<T, U>::runFPGA() {
    auto t_start = Clock::now();
    auto t_end = Clock::now();
    std::stringstream ss;

    for (int i = 0 ; i < _numCU * _numEpochs; i++){
        t_start = Clock::now();
        auto ikf = get_info_lock();
        int ikb = ikf.first;
        int ik = ikb % _numCU ;
        bool firstRun = ikf.second;

        auto ts1 = SClock::now();
        print_nanoseconds("        start:  ",ts1, ik, ss);
    
        get_ilock(ikb);
        // Copy input data to device global memory
        if (!firstRun) {
            OCL_CHECK(err, err = read_event[ikb].wait());
        }
        OCL_CHECK(err,
                    err =
                        q[ik].enqueueMigrateMemObjects({buffer_in[ikb]},
                                                    0 /* 0 means from host*/,
                                                    NULL,
                                                    &(write_event[ikb])));
        writeList[ikb].push_back(write_event[ikb]);
        //Launch the kernel
        OCL_CHECK(err,
                    err = q[ik].enqueueNDRangeKernel(
                        krnl_xil[ikb], 0, 1, 1, &(writeList[ikb]), &(kern_event[ikb])));

        kernList[ikb].push_back(kern_event[ikb]);
        OCL_CHECK(err,
                    err = q[ik].enqueueMigrateMemObjects({buffer_out[ikb]},
                                                    CL_MIGRATE_MEM_OBJECT_HOST,
                                                    &(kernList[ikb]),
                                                    &(read_event[ikb])));
        release_ilock(ikb);
    
        OCL_CHECK(err, err = kern_event[ikb].wait());
        OCL_CHECK(err, err = read_event[ikb].wait());
        auto ts2 = SClock::now();
        print_nanoseconds("       finish:  ",ts2, ik, ss);

        t_end = Clock::now();
        ss << "KERN"<<ik<<"   Total time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t_end - t_start).count() << " ns\n";
    }
    return ss;
}

template <class T, class U>
void FpgaObj<T, U>::event_cb(cl_event event1, cl_int cmd_status, void *data) {
    cl_int err;
    cl_command_type command;
    cl::Event event(event1, true);
    OCL_CHECK(err, err = event.getInfo(CL_EVENT_COMMAND_TYPE, &command));
    cl_int status;
    OCL_CHECK(err,
              err = event.getInfo(CL_EVENT_COMMAND_EXECUTION_STATUS, &status));
    const char *command_str;
    const char *status_str;
    switch (command) {
    case CL_COMMAND_READ_BUFFER:
        command_str = "buffer read";
        break;
    case CL_COMMAND_WRITE_BUFFER:
        command_str = "buffer write";
        break;
    case CL_COMMAND_NDRANGE_KERNEL:
        command_str = "kernel";
        break;
    case CL_COMMAND_MAP_BUFFER:
        command_str = "kernel";
        break;
    case CL_COMMAND_COPY_BUFFER:
        command_str = "kernel";
        break;
    case CL_COMMAND_MIGRATE_MEM_OBJECTS:
        command_str = "buffer migrate";
        break;
    default:
        command_str = "unknown";
    }
    switch (status) {
    case CL_QUEUED:
        status_str = "Queued";
        break;
    case CL_SUBMITTED:
        status_str = "Submitted";
        break;
    case CL_RUNNING:
        status_str = "Executing";
        break;
    case CL_COMPLETE:
        status_str = "Completed";
        break;
    }
    printf("[%s]: %s %s\n",
           reinterpret_cast<char *>(data),
           status_str,
           command_str);
    fflush(stdout);
}

template <class T, class U>
void FpgaObj<T, U>::set_callback(const char *queue_name, cl::Event event) {
    cl_int err;
    OCL_CHECK(err,
              err =
                  event.setCallback(CL_COMPLETE, event_cb, (void *)queue_name));
}

