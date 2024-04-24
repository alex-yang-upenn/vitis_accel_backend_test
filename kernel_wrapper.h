#ifndef WRAPPER_H
#define WRAPPER_H

#include "firmware/defines.h"

#define NUM_CU 4
#define NUM_THREAD 8
#define NUM_CHANNEL 4

/* Calculate according to FPGA specs (HBM PC memory size) and size of input layer. 
DO NOT fully use up assigned HBM memory. 
*/
#define BATCHSIZE 8192

#define DATA_SIZE_IN N_INPUT_1_1
#define INSTREAMSIZE (BATCHSIZE * DATA_SIZE_IN)

#define DATA_SIZE_OUT N_LAYER_11
#define OUTSTREAMSIZE (BATCHSIZE * DATA_SIZE_OUT)

typedef input_t in_buffer_t;
typedef result_t out_buffer_t; 

#endif