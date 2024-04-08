#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <sstream>
#include <thread>
#include <vector>

#include "kernel_wrapper.h"
#include "libs/FpgaObj.h"
#include "libs/FpgaObj.cpp"
#include "libs/timing.h"
#include "libs/xcl2.hpp"

#define STRINGIFY(var) #var
#define EXPAND_STRING(var) STRINGIFY(var)


void runFPGAHelper(fpgaObj<in_buffer_t, out_buffer_t> &theFPGA) {
    std::stringstream ss;
    ss << (theFPGA.runFPGA()).str();
    theFPGA.write_ss_safe(ss.str());
}

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <XCLBIN Filename>" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::string xclbinFilename = argv[1];

    fpgaObj<in_buffer_t, out_buffer_t> fpga(INSTREAMSIZE, OUTSTREAMSIZE, NUM_CU, NBUFFER, 100);

    /* 
    get_xil_devices() is a utility API which will find the xilinx
    platforms and will return list of devices connected to Xilinx platform
    */ 
    std::vector<cl::Device> devices = xcl::get_xil_devices();

    // Load xclbin
    cl::Program::Binaries bins = xcl::import_binary_file(xclbinFilename);

    fpga.initializeOpenCL(devices, bins);

    fpga.allocateHostMemory();

    std::cout << "Writing output predictions to tb_data/tb_output_predictions.dat" << std::endl;
      
    std::cout << "Loading input data from tb_data/tb_input_features.dat" 
              << "and output predictions from tb_data/tb_output_features.dat" << std::endl;
    
    std::ifstream fpr("tb_data/tb_output_predictions.dat");
    std::ifstream fin("tb_data/tb_input_features.dat");

    if (!fin.is_open()) {
        std::cerr << "Error: Could not open tb_input_features.dat" << std::endl;
    }

    if (!fpr.is_open()) {
        std::cerr << "Error: Could not open tb_output_predictions.dat" << std::endl;
    }

    std::vector<in_buffer_t> inputData;
    std::vector<out_buffer_t> outputPredictions;
    if (fin.is_open() && fpr.is_open()) {
        int e = 0;
        std::string iline;
        std::string pline;
        while (std::getline(fin, iline) && std::getline(fpr, pline)) {
            if (e % 10 == 0) {
                std::cout << "Processing input/prediction " << e << std::endl;
            }
            std::stringstream in(iline); 
            std::stringstream pred(pline); 
            std::string token
            while (in >> token) { // Extract tokens using stringstream
                in_buffer_t tmp = atof(token);
                inputData.push_back(tmp);
            }
            while (pred >> token) { // Extract tokens using stringstream
                out_buffer_t tmp = atof(token);
                outputPredictions.push_back(tmp);
            }
        }
        e++;
    }
    
    // Copying in testbench data
    int n = inputData.size();
    for (int i = 0; i < n; i++) {
        fpga.source_in[i] = inputData[i];
    }

    // Padding rest of buffer with arbitrary values
    for (int i = n; i < NUM_CU * NBUFFER * INSTREAMSIZE) {
        fpga.source_in[i] = (in_buffer_t)(1234.567);
    }

    std::vector<std::thread> hostAccelerationThreads;
    hostAccelerationThreads.reserve(NBUFFER);

    auto ts_start = SClock::now();

    for (int i = 0; i < NBUFFER; i++) {
        hostAccelerationThreads.push_back(std::thread(runFPGAHelper, std::ref(fpga)));
    }

    for (int i = 0; i < NBUFFER; i++) {
        hostAccelerationThreads[i].join();
    }

    fpga.finishRun();

    auto ts_end = SClock::now();
    float throughput = (float(NUM_CU * NBUFFER * 100 * BATCHSIZE) /
            float(std::chrono::duration_cast<std::chrono::nanoseconds>(ts_end - ts_start).count())) *
            1000000000.;
    
    std::ofstream outFile("u55c_executable_logfile.log", std::ios::trunc);
    if (outFile.is_open()) {
        outFile << fpga.ss.rdbuf();
        outFile.close();
    } else {
        std::cerr << "Error opening file for writing." << std::endl;
    }

    std::cout << "Throughput = "
            << throughput
            <<" predictions/second" << std::endl;
    return EXIT_SUCCESS;
}
