#!/bin/bash
#
# Copyright (c) 2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
#
# SPDX-License-Identifier: BSD-2-Clause-Patent
#


if [ $# -ne 2 ]
then
    echo "usage: $0 [PATH to PATCH-SET] [PATH to EDK2 REPO.]"
    exit 1
fi

PATCH_FOLDER="$PWD/$1"
REPO_PATH="$PWD/$2"
FAILURE=0

if [ ! -e "$PATCH_FOLDER" ]
then
    echo "$PATCH_FOLDER does not exist"
    exit 1
fi

if [ ! -e "$REPO_PATH" ]
then
    echo "$REPO_PATH does not exist"
    exit 1
fi

for file in `ls $PATCH_FOLDER/*.patch`
do
  echo "Check patch: $file"
  python3 $REPO_PATH/BaseTools/Scripts/PatchCheck.py $file
  if [ $? -ne 0 ]
  then
    echo "Patch check failure on file: $file"
    FAILURE=1
  fi
done

if [ $FAILURE -eq 0 ]
then
  exit 0
fi

exit 1
