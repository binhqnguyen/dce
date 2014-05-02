#!/bin/bash

apt="sudo apt-get install"

packages="mercurial libpcap-dev libexpat1-dev libdb-dev bison flex libssl-dev python-pygraphviz  python-pygoocanvas qt4-dev-tools g++ python-dev GIT CVS cMake wget Unrar bzr gccxml python-pip"


#install packages
#$apt $packages
#if [ $? -ne 0 ]; then
#        echo "Install $packages failed."
#        exit 1
#else
#        echo "Install $packages done."
#fi


#Install DCE using bake
hg clone http://code.nsnam.org/bake bake

export BAKE_HOME=`pwd`/bake
export PATH=$PATH:$BAKE_HOME
export PYTHONPATH=$PYTHONPATH:$BAKE_HOME

mkdir dce
cd dce
bake.py configure -e dce-linux-1.2
bake.py download
bake.py build
###########################

##clone the current kernel (net-next-sim.git)
cd source
git clone https://github.com/thehajime/net-next-sim.git
cd net-next-sim

#check out a recent branch (ie, sim-ns3-3.10.0-branch)
#git checkout sim-ns3-3.12.0-branch
git checkout sim-ns3-3.10.0-branch

#
#HERE: edits the kernel in net-next-sim if needed.
#
#change tcp_input.c ...

# Configure and build
make defconfig OPT=yes ARCH=sim
make library OPT=yes ARCH=sim

# copy the new kernel to $HOME/dce/build/bin_dce/
cp *.so $HOME/dce/build/bin_dce/

exit 0
