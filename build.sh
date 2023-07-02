#!/usr/bash

set -e

gcc -c libxd.cpp
ar rcs libxd.a libxd.o
gcc main.c libxd.a -o ccpp

mkdir -p build
rm libxd.a libxd.o
mv ccpp build/
