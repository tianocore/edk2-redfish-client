#!/bin/bash
#
# Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
#
# SPDX-License-Identifier: BSD-2-Clause-Patent
#


if [ $# -ne 3 ]
then
    echo "usage: $0 [PATH to CONFIG FILE] [PATH to REPO.] [NO. of COMMITS]"
    exit 1
fi

CONFIG_FILE="$PWD/$1"
REPO_PATH="$PWD/$2"
NO_COMMITS="$3"

if [ ! -e "$CONFIG_FILE" ]
then
    echo "$CONFIG_FILE does not exist"
    exit 1
fi

if [ ! -e "$REPO_PATH" ]
then
    echo "$REPO_PATH does not exist"
    exit 1
fi

cd "$REPO_PATH"

FAILURE=0
CHANGED_FILES=$(git diff --name-only HEAD~$NO_COMMITS..HEAD | grep -e '\.c$' -e '\.h')
if [ -z "$CHANGED_FILES" ]
then
  echo "No c or h file to run uncrustify check"
  exit 0
fi

for file in $CHANGED_FILES
do
  if [ -e "$file" ]
  then
    echo "Uncrustify check file: $file"
    uncrustify -c $CONFIG_FILE -f $file --check
    if [ $? -ne 0 ]
    then
      echo "Uncrustify check failure on file: $file"
      FAILURE=1
    fi
  else
    echo "File does not exist (deleted file?): $file"
  fi
done

if [ $FAILURE -eq 0 ]
then
  exit 0
fi

exit 1
