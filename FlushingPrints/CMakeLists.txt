cmake_minimum_required(VERSION 3.26)
project(FlushingPrints)

set(CMAKE_CXX_STANDARD 17)

add_executable(FlushingC FlushingC.c)
add_executable(FlushingC_codeOnly FlushingC_codeOnly.c)
add_executable(FlushingCPP FlushingCPP.cpp)