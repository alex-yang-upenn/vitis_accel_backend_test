#ifndef WRAPPER_H
#define WRAPPER_H

#include "firmware/defines.h"

#define NUM_CU 4
#define NBUFFER 8

#define BATCHSIZE 8192

#define DATA_SIZE_IN 1024
#define DEPTH N_INPUT_3_1

#define INSTREAMSIZE (BATCHSIZE * DATA_SIZE_IN * DEPTH)
#define DATA_SIZE_OUT N_LAYER_23
#define OUTSTREAMSIZE (BATCHSIZE * DATA_SIZE_OUT)

typedef ap_fixed<16,6> in_buffer_t;
typedef ap_fixed<16,6> out_buffer_t;

#endif