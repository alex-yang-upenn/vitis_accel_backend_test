#include "HbmFpga.h"

#include "xcl2.hpp"

// HBM Pseudo-channel(PC) requirements
#define MAX_HBM_PC_COUNT 32
#define PC_NAME(n) n | XCL_MEM_TOPOLOGY
const int pc[MAX_HBM_PC_COUNT] = {
    PC_NAME(0),  PC_NAME(1),  PC_NAME(2),  PC_NAME(3),  PC_NAME(4),  PC_NAME(5),  PC_NAME(6),  PC_NAME(7),
    PC_NAME(8),  PC_NAME(9),  PC_NAME(10), PC_NAME(11), PC_NAME(12), PC_NAME(13), PC_NAME(14), PC_NAME(15),
    PC_NAME(16), PC_NAME(17), PC_NAME(18), PC_NAME(19), PC_NAME(20), PC_NAME(21), PC_NAME(22), PC_NAME(23),
    PC_NAME(24), PC_NAME(25), PC_NAME(26), PC_NAME(27), PC_NAME(28), PC_NAME(29), PC_NAME(30), PC_NAME(31)};

template <class V, class W>
void HbmFpga<V, W>::allocateHostMemory(int chan_per_port) {
    // Create Pointer objects for the ports for each virtual compute unit
    // Assigning Pointers to specific HBM PC's using cl_mem_ext_ptr_t type and corresponding PC flags
    for (int ib = 0; ib < _numThreads; ib++) {
        for (int ik = 0; ik < _numCU; ik++) {
            cl_mem_ext_ptr_t buf_in_ext_tmp;
            buf_in_ext_tmp.obj = source_in.data() + ((ib*_numCU + ik) * _kernInputSize);
            buf_in_ext_tmp.param = 0;
            int in_flags = 0;
            for (int i = 0; i < chan_per_port; i++) {
                in_flags |= pc[(ik * 2 * 4) + i];
            }
            buf_in_ext_tmp.flags = in_flags;
            
            buf_in_ext.push_back(buf_in_ext_tmp);

            cl_mem_ext_ptr_t buf_out_ext_tmp;
            buf_out_ext_tmp.obj = source_hw_results.data() + ((ib*_numCU + ik) * _kernOutputSize);
            buf_out_ext_tmp.param = 0;
            int out_flags = 0;
            for (int i = 0; i < chan_per_port; i++) {
                out_flags |= pc[(ik * 2 * 4) + chan_per_port + i];
            }
            buf_out_ext_tmp.flags = out_flags;
            
            buf_out_ext.push_back(buf_out_ext_tmp);
        }
    }

    // Creating Buffer objects in Host memory
     /* ***NOTE*** When creating a Buffer with user pointer (CL_MEM_USE_HOST_PTR), under the hood, user pointer
    is used if it is properly aligned. when not aligned, runtime has no choice but to create
    its own host side Buffer. So it is recommended to use this allocator if user wishes to
    create Buffer using CL_MEM_USE_HOST_PTR to align user buffer to page boundary. It will 
    ensure that user buffer is used when user creates Buffer/Mem object with CL_MEM_USE_HOST_PTR */
    size_t vector_size_in_bytes = sizeof(T) * _kernInputSize;
    size_t vector_size_out_bytes = sizeof(U) * _kernOutputSize;
    for (int ib = 0; ib < _numThreads; ib++) {
        for (int ik = 0; ik < _numCU; ik++) {
            cl::Buffer buffer_in_tmp (context, 
                    CL_MEM_USE_HOST_PTR | CL_MEM_EXT_PTR_XILINX | CL_MEM_READ_ONLY,
                    vector_size_in_bytes,
                    &(buf_in_ext[ib*_numCU + ik]));
            cl::Buffer buffer_out_tmp(context,
                    CL_MEM_USE_HOST_PTR | CL_MEM_EXT_PTR_XILINX | CL_MEM_WRITE_ONLY,
                    vector_size_out_bytes,
                    &(buf_out_ext[ib*_numCU + ik]));
            buffer_in.push_back(buffer_in_tmp);
            buffer_out.push_back(buffer_out_tmp);
            krnl_xil[ib*_numCU + ik].setArg(0, buffer_in[ib*_numCU + ik]);
            krnl_xil[ib*_numCU + ik].setArg(1, buffer_out[ib*_numCU + ik]);
        }
    }
}