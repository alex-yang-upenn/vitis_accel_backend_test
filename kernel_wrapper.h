#ifndef WRAPPER_H
#define WRAPPER_H

#include "firmware/defines.h"

#define NUM_CU 4
#define NBUFFER 8

/* Calculate according to FPGA specs (HBM PC memory size) and size of input layer. 
DO NOT fully use up assigned HBM memory. 
*/
#define BATCHSIZE 8192

#define DATA_SIZE_IN N_INPUT_1_1 // for inp in model.get_input_variables(): inp.size_cpp()
#define INSTREAMSIZE (BATCHSIZE * DATA_SIZE_IN)

#define DATA_SIZE_OUT N_LAYER_11 // for out in model.get_output_variables(): out.size_cpp()
#define OUTSTREAMSIZE (BATCHSIZE * DATA_SIZE_OUT)

#endif