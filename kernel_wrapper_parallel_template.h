#ifndef WRAPPER_H
#define WRAPPER_H

#include "firmware/defines.h"

#define NUM_CU 4
#define NBUFFER 8

#define BATCHSIZE 8192

#define DATA_SIZE_IN // (for inp in model.get_input_variables(): inp.size_cpp())
#define INSTREAMSIZE (BATCHSIZE * DATA_SIZE_IN)

#define DATA_SIZE_OUT // (for out in model.get_output_variables(): out.size_cpp())
#define OUTSTREAMSIZE (BATCHSIZE * DATA_SIZE_OUT)

typedef /*inp.type.name*/ in_buffer_t;
typedef /*out.type.name*/ out_buffer_t; 

#endif