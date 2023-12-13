cmake_minimum_required(VERSION 3.26)
project(johannes C)

set(CMAKE_C_STANDARD 11)

add_executable(johannes main.c
        operations.c
        operations.h
        calculator.c)
