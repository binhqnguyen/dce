#!/bin/bash

make clean
# Configure and build
make defconfig OPT=yes ARCH=sim
make library OPT=yes ARCH=sim

#make defconfig ARCH=sim
#make library ARCH=sim

# copy the new kernel to $HOME/dce/build/bin_dce/
cp *.so $HOME/dce/build/bin_dce/
