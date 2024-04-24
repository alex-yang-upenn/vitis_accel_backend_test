#ifndef FPGAOBJ_H
#define FPGAOBJ_H

#include <mutex>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <thread>
#include <vector>

#include "xcl2.hpp"

template <class T, class U>
class FpgaObj {
  public:
    std::vector<T,aligned_allocator<T>> source_in;  // Vector containing inputs to all kernels
    std::vector<U,aligned_allocator<U>> source_hw_results;  // Vector containing all outputs from all kernels
    cl_int err;  // Stores potential error codes thrown by OpenCL functions
    std::stringstream ss;  // Logs information from runFPGA(). Every thread logs to this stringstream

    /**
     * \brief Constructor. Reserves and allocates buffers in host memory.
     * \param kernInputSize Total size of all input buffers
     * \param kernOutputSize Total size of all output buffers
     * \param numCU Number of compute units physically instantiated in the FPGA
     * \param numThreads Number of threads host cpu will use to drive the FPGA
     * \param numEpochs Number of times to loop over the data (for testing purposes)
    */
    FpgaObj(int kernInputSize, int kernOutputSize, int numCU, int numThreads, int numEpochs);

    /**
     * \brief Initializes OpenCL objects using the given devices and program
     * \param devices A vector containing connected devices
     * \param bins An OpenCL object containing the binary program that runs on the FPGA
    */
    void initializeOpenCL(std::vector<cl::Device> &devices, cl::Program::Binaries &bins);

    /**
     * \brief Creates OpenCL pointer objects and buffers for device inputs and outputs. Implemented by subclasses
    */
    virtual void allocateHostMemory(int chan_per_port) = 0;

    /**
     * \brief Logs information about thread completion
     * \param newss Additional thread-specific information to log
    */
    void write_ss_safe(std::string newss);
    
    /**
     * \brief Completes all enqueued operations
    */
    void finishRun();

    /**
     * \brief Migrates input to FPGA , executes kernels, and migrates output to host memory. Run this function in numThreads different threads
     * \return Stringstream containing logs of the run
    */
    std::stringstream runFPGA();

  protected:
    int _kernInputSize;
    int _kernOutputSize;
    int _numCU;
    int _numThreads;
    int _numEpochs;

    int ikern;  // Counter tracking which virtual kernel is being run
    std::vector<bool> isFirstRun;  // Vector tracking whether each virtual kernel is being run for the first time
    mutable std::mutex mtx;  // Mutex for ikern, isFirstRun, and get_info_lock()
    mutable std::vector<std::mutex> mtxi;  // Mutexes for each virtual kernel and associate resources

    int ithr;  // Counter tracking the threads that ran to completion (for logging purposes)
    mutable std::mutex smtx; // Mutex for ithr and write_ss_safe()

    cl::Program program;  // Object containing the Program (built from kernel_wrapper.cpp) that runs on each physical compute unit
    cl::Context context;  // Object containing the Device Context
    std::vector<cl::CommandQueue> q;  // Vector containing Command Queue objects controlling physical compute units
    std::vector<cl::Kernel> krnl_xil;  // Vector containing virtual kernel objects
    std::vector<cl_mem_ext_ptr_t> buf_in_ext;  // Vector containing Pointer objects that map host memory to FPGA input.
    std::vector<cl_mem_ext_ptr_t> buf_out_ext;  // Vector containing Pointer objects that map host memory to FPGA output.
    std::vector<cl::Buffer> buffer_in;  // Vector containing Buffer objects for FPGA inputs, corresponding to physical compute units
    std::vector<cl::Buffer> buffer_out;  // Vector containing Buffer objects for FPGA outputs, corresponding to physical compute units
    std::vector<cl::Event> write_event;  // Vector of Event objects, used as flags indicating completion of transferring inputs to physical compute units
    std::vector<cl::Event> kern_event;  // Vector of Event objects, used as flags indicating completion of computation by physical compute units
    std::vector<cl::Event> read_event;  // Vector of Event objects, used as flags indicating completion of transferring outputs from physical compute units
    std::vector<std::vector<cl::Event>> writeList;  // enqueueNDRangeKernel requires a vector of Event objects and checks each for completion
    std::vector<std::vector<cl::Event>> kernList;  // enqueueMigrateMemObjects requires a vector of Event objects and checks each for completion

    /**
     * \brief Tracks the index of the virtual kernel being run, and whether it is being run for the first time
     * \return Returns a pair: (index, first run indicator)
    */
    std::pair<int,bool> get_info_lock();

    /**
     * \brief Locks the appropriate mutex to ensure thread safety for the virtual kernel being run
     * \param ik The index of the virtual kernel being run
    */
    void get_ilock(int ik);

    /**
     * \brief Unlocks the appropriate mutex for the virtual kernel that has finished running
     * \param ik The index of the virtual kernel that has finished running
    */
    void release_ilock(int ik);
    
    /**
    * \brief **UNTESTED** Callback function for Event objects that prints a description of the operation performed by the OpenCL runtime.
    */ 
    void event_cb(cl_event event1, cl_int cmd_status, void *data);

    /**
     * \brief **UNTESTED** Sets event_cb() as an Event's callback function.
    */
    void set_callback(const char *queue_name, cl::Event event);

};

#endif