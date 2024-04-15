#include "kernel_wrapper.h"
#include "firmware/myproject.h"

static void read_input(const in_buffer_t *in, hls::stream<in_stream_t> &input, int n) {
  for (int i = 0; i < DATA_SIZE_IN; i++) {
    #pragma HLS PIPELINE
    in_stream_t tmp;
    for (int j = 0; j < DEPTH; j++) {
      #pragma HLS UNROLL
      tmp[j] = in[(n * DATA_SIZE_IN * DEPTH) + (i * DEPTH) + j];
    }
    input << tmp;
  }
}

static void write_result(out_buffer_t *out, hls::stream<out_stream_t> &output, int n) {
  out_stream_t tmp = output.read();
  for (int i = 0; i < DATA_SIZE_OUT; i++) {
    #pragma HLS UNROLL
    out[(n * DATA_SIZE_OUT) + i] = tmp[i];
  }
}

extern "C" {
  /**
    \brief HLS4ML Kernel Implementation 
    \param in Input Vector
    \param out Output Vector
*/
  void kernel_wrapper(const in_buffer_t *in, out_buffer_t *out) {
    hls::stream<in_stream_t> input("input");
    hls::stream<out_stream_t> output("output");
    #pragma HLS STREAM variable=input depth=DATA_SIZE_IN
    #pragma HLS STREAM variable=output depth=1
    
    for (int n = 0; n < BATCHSIZE; n++) {
    #pragma HLS DATAFLOW          
      read_input(in, input, n);
      myproject(input, output);
      write_result(out, output, n);
    }
  }
}