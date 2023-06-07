#!/bin/bash
#
# Copyright (c) 2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
#
# SPDX-License-Identifier: BSD-2-Clause-Patent
#


ARCH="X64"
TARGET="DEBUG"
TOOLCHAIN="GCC5"

if [ $# -eq 0 ]
then
    echo "usage: $0 [path to edk2] [path to edk2-redfish-client] [ARCH] [TARGET] [TOOLCHAIN]"
    exit 1
fi

EDK2_ROOT="$PWD/$1"
EDK2_REDFISH_CLIENT="$PWD/$2"
ARCH="$3"
TARGET="$4"
TOOLCHAIN="$5"

if [ ! -e "$EDK2_ROOT" ]
then
    echo "$EDK2_ROOT does not exist"
    exit 1
fi

if [ ! -e "$EDK2_REDFISH_CLIENT" ]
then
    echo "$EDK2_REDFISH_CLIENT does not exist"
    exit 1
fi

export PACKAGES_PATH="$EDK2_ROOT:$EDK2_REDFISH_CLIENT"
echo "PACKAGES_PATH: $PACKAGES_PATH"
echo "ARCH: $ARCH"
echo "TARGET: $TARGET"
echo "TOOLCHAIN: $TOOLCHAIN"

cd "$EDK2_ROOT"
. edksetup.sh BaseTools

if [ ! -e "BaseTools/Source/C/bin" ]
then
  echo "binary does not exist, rebuild it"

  cd BaseTools
  make
  cd ..

  echo "If there is build error related to nasm, try to use latest nasm from: https://www.nasm.us/pub/nasm/releasebuilds/"
  echo ""
  echo "1) wget https://www.nasm.us/pub/nasm/releasebuilds/2.15rc12/nasm-2.15rc12.tar.gz"
  echo "2) tar zxvf nasm-2.15rc12.tar.gz"
  echo "3) cd nasm-2.15rc12"
  echo "4) ./configure --prefix=/usr"
  echo "5) sudo make install"
  echo "6) nasm -v"
fi

build -p RedfishClientPkg/RedfishClientPkg.dsc -a $ARCH -t $TOOLCHAIN -b $TARGET
if [ $? -ne 0 ]
then
  exit 1
fi

exit 0
