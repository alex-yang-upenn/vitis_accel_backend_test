#include "kernel_wrapper.h"
#include "firmware/myproject.cpp"

static void read_input(const input_t *in, input_t (&in_buf)[BATCHSIZE][DATA_SIZE_IN]) {
  for (int i = 0; i < BATCHSIZE; i++) {
      #pragma HLS PIPELINE
      for(int j = 0; j < DATA_SIZE_IN; j++) { 
        #pragma HLS UNROLL
        in_buf[i][j] = in[i * DATA_SIZE_IN + j];
      }
    }
}
static void run_inference(input_t (&in_buf)[BATCHSIZE][DATA_SIZE_IN], output_t (&out_buf)[BATCHSIZE][DATA_SIZE_OUT]) {
  for (int i = 0; i < BATCHSIZE; i++) {
      #pragma HLS DATAFLOW
      hls4ml: MYPROJ(in_buf[i],out_buf[i]);
    }
}
static void write_result(output_t *out, output_t (&out_buf)[BATCHSIZE][DATA_SIZE_OUT]) {
  for (int i = 0; i < BATCHSIZE; i++) {
    #pragma HLS PIPELINE
    for (int j = 0; j < DATA_SIZE_OUT; j++) {
      #pragma HLS UNROLL
      out[i * DATA_SIZE_OUT + j] = out_buf[i][j];
    }
  }
}

extern "C" {
  /**
    \brief HLS4ML Kernel Implementation 
    \param in Input Vector
    \param out Output Vector
*/
  void alveo_hls4ml(const input_t *in, output_t *out) {
    input_t in_buf[BATCHSIZE][DATA_SIZE_IN];
    output_t out_buf[BATCHSIZE][DATA_SIZE_OUT];
    #pragma HLS ARRAY_RESHAPE   variable=in_buf  complete dim=2
    #pragma HLS ARRAY_RESHAPE   variable=out_buf complete dim=2

    #pragma HLS DATAFLOW
    read_input(in, in_buf);
    run_inference(in_buf, out_buf);
    write_result(out, out_buf);
  }
}