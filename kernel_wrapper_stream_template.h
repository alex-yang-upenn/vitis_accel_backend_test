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
#define DEPTH N_INPUT_1_1
#define DATA_SIZE_IN 1
#endif

#ifdef IS_CONV1D
#define DEPTH N_INPUT_2_1
#define DATA_SIZE_IN N_INPUT_1_1
#endif

#ifdef IS_CONV2D
#define DEPTH N_INPUT_3_1
#define DATA_SIZE_IN (N_INPUT_1_1 * N_INPUT_2_1)
#endif

#define INSTREAMSIZE (BATCHSIZE * DATA_SIZE_IN * DEPTH)
#define DATA_SIZE_OUT N_LAYER_11 // Update accordingly
#define OUTSTREAMSIZE (BATCHSIZE * DATA_SIZE_OUT)

typedef ap_fixed<16,6> input_t; // Update accordingly
typedef ap_fixed<16,6> output_t;
typedef input_t input_stream_t;
typedef result_t output_stream_t;

#endif