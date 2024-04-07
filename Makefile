# Absolute path to top directory of Git repository
PWD = $(shell readlink -f .)

#Checks for XILINX_VITIS
ifndef XILINX_VITIS
$(error XILINX_VITIS variable is not set, please set correctly and rerun)
endif

#Checks for XILINX_XRT
ifndef XILINX_XRT
$(error XILINX_XRT variable is not set, please set correctly and rerun)
endif

#Checks for XILINX_VIVADO
ifndef XILINX_VIVADO
$(error XILINX_VIVADO variable is not set, please set correctly and rerun)
endif

#Checks for g++
ifneq ($(shell expr $(shell g++ -dumpversion) \>= 5), 1)
CXX := $(XILINX_VIVADO)/tps/lnx64/gcc-6.2.0/bin/g++
$(warning [WARNING]: g++ version older. Using g++ provided by the tool : $(CXX))
endif

CXX_LIBRARIES += -I$(XILINX_XRT)/include/ -I$(XILINX_VIVADO)/include/ -I$(XILINX_HLS)/include/ \
				 -I$(PWD)/libs/ -I$(PWD)/firmware/ -I$(PWD)/firmware/nnet_utils/ \
				 -L$(XILINX_XRT)/lib/ -lOpenCL -lrt -lstdc++ -lpthread
CXX_SETTINGS +=  -Wall -std=c++11 -Wno-unknown-pragmas -g -O0 
CXX_MACROS += -DHLS4ML_DATA_DIR=./ -DXCL_BIN_FILENAME=myproject_kernel.xclbin

KERN_LIBRARIES += -I./ -I./firmware/ -I./firmware/weights -I./firmware/nnet_utils/

.PHONY: all
all: host kernel 

# Building kernel
./build/myproject_kernel.xo: kernel_wrapper.cpp
	mkdir -p ./build
	v++ -c -t hw --config ./u55c.cfg kernel_wrapper.cpp firmware/myproject.cpp -o ./build/kernel_wrapper.xo $(KERN_LIBRARIES)
 
myproject_kernel.xclbin: ./build/kernel_wrapper.xo
	v++ -l -t hw --config ./u55c.cfg ./build/kernel_wrapper.xo -o kernel_wrapper.xclbin

# Building Host
host: src/host.cpp ${PWD}/libs/xcl2.cpp 
	$(CXX) $(CXXFLAGS) $(CXX_MACROS) src/host.cpp ${PWD}/libs/xcl2.cpp -o host.exe $(LDFLAGS)

.PHONY: kernel
kernel: myproject_kernel.xclbin

# Cleaning stuff
.PHONY: clean
	-rm -rf build* *.xclbin
	-rm -rf *.log *.jou *.rpt *.csv *.mdb