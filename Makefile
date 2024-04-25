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

CXX_SOURCES += ${PWD}/libs/xcl2.cpp ${PWD}/libs/FpgaObj.cpp ${PWD}/libs/HbmFpga.cpp
CXX_LIBRARIES += -I$(XILINX_XRT)/include/ -I$(XILINX_VIVADO)/include/ -I$(XILINX_HLS)/include/ \
				 -I$(PWD)/libs/ -I$(PWD)/firmware/ -I$(PWD)/firmware/nnet_utils/ \
				 -L$(XILINX_XRT)/lib/ -lOpenCL -lrt -lstdc++ -lpthread
CXX_SETTINGS +=  -Wall -std=c++11 -Wno-unknown-pragmas -g -O0 

KERN_LIBRARIES += -I./ -I./firmware/ -I./firmware/weights -I./firmware/nnet_utils/

.PHONY: all
all: host kernel 

# Building kernel
./build/myproject_kernel.xo: kernel_wrapper.cpp
	mkdir -p ./build
	v++ -c -t hw --config ./u55c.cfg kernel_wrapper.cpp firmware/myproject.cpp -o ./build/myproject_kernel.xo $(KERN_LIBRARIES)
 
myproject_kernel.xclbin: ./build/myproject_kernel.xo
	v++ -l -t hw --config ./u55c.cfg ./build/myproject_kernel.xo -o kernel_wrapper.xclbin

# Building Host
host: $(CXX_SOURCES) myproject_host_cl.cpp 
	$(CXX) $(CXX_SOURCES) myproject_host_cl.cpp -o host $(CXX_LIBRARIES) $(CXX_SETTINGS)

.PHONY: kernel
kernel: myproject_kernel.xclbin

# Cleaning stuff
.PHONY: clean
clean:
	-rm -rf host
	-rm -rf *.xclbin*
	-rm -rf build*
	-rm -rf *.log *.jou *.rpt *.csv *.mdb *.ltx
