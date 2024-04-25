#pragma once

#include "FpgaObj.h"

template <class V, class W>
class HbmFpga : public FpgaObj<V, W> {
 public:
    HbmFpga(int kernInputSize, int kernOutputSize, int numCU, int numThreads, int numEpochs);

    void allocateHostMemory(int chan_per_port);
};
