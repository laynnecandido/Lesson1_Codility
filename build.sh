#!/bin/sh

mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ../
cmake --build .
cd ../
rm -rf build