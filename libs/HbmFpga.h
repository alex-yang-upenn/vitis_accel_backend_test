#ifndef HBMFPGA_H
#define HBMFPGA_H

#include "FpgaObj.h"

template <class V, class W>
class HbmFpga : public FpgaObj<V, W> {
 public:
    HbmFpga(int kernInputSize, int kernOutputSize, int numCU, int numThreads, int numEpochs)
        : FpgaObj(kernInputSize, kernOutputSize, numCU, numThreads, numEpochs) {
    }

    void allocateHostMemory(int chan_per_port);
};

#endif