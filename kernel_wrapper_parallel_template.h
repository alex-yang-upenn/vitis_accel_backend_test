/*******************************************************************************
Description:
    HLS pragmas can be used to optimize the design : improve throughput, reduce latency and 
    device resource utilization of the resulting RTL code
    This is a wrapper to be used with an hls4ml project
*******************************************************************************/
#ifndef WRAPPER_H
#define WRAPPER_H

#include "firmware/defines.h"

#define NUM_CU 4
#define NBUFFER 8

/* Calculate according to FPGA specs (HBM PC memory size) and size of input layer. 
DO NOT fully use up assigned HBM memory. 
*/
#define BATCHSIZE 8192

#ifdef IS_DENSE
#define DATA_SIZE_IN N_INPUT_1_1
#endif

#ifdef IS_CONV1D
#define DATA_SIZE_IN (N_INPUT_1_1 * N_INPUT_2_1)
#endif

#ifdef IS_CONV2D
#define DATA_SIZE_IN (N_INPUT_1_1 * N_INPUT_2_1 * N_INPUT_3_1)
#endif

#define INSTREAMSIZE (BATCHSIZE * DATA_SIZE_IN)
#define DATA_SIZE_OUT N_LAYER_11 // Update accordingly
#define OUTSTREAMSIZE (BATCHSIZE * DATA_SIZE_OUT)

#endif