#ifndef WRAPPER_H
#define WRAPPER_H

#include "firmware/defines.h"

#define NUM_CU 4
#define NBUFFER 8

/* Calculate according to FPGA specs (HBM PC memory size) and size of input layer. 
DO NOT fully use up assigned HBM memory. 
*/
#define BATCHSIZE 8192

#define DEPTH N_INPUT_1_1 // dimensions[-1]
#define DATA_SIZE_IN 1 // (dimensions[0:length - 1])

#define INSTREAMSIZE (BATCHSIZE * DATA_SIZE_IN * DEPTH)
#define DATA_SIZE_OUT // (for out in model.get_output_variables(): out.size_cpp())
#define OUTSTREAMSIZE (BATCHSIZE * DATA_SIZE_OUT)

typedef ap_fixed<16,6> in_buffer_t;
typedef ap_fixed<16,6> out_buffer_t;

#endif