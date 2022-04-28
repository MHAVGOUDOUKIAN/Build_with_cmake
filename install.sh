#!bin/bash

echo Launching installation
cmake .
cmake --build .
echo Cleaning directory..
rm cmake_install.cmake
rm CMakeCache.txt
rm Makefile
rm -r CMakeFiles
rm lib_math/cmake_install.cmake
rm lib_math/Makefile
rm -r lib_math/CMakeFiles
echo Installation finished
