#!/bin/bash

# Configure and build
make defconfig OPT=yes ARCH=sim
make library OPT=yes ARCH=sim

# copy the new kernel to $HOME/dce/build/bin_dce/
cp *.so $HOME/dce/build/bin_dce/
