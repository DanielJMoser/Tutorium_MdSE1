cmake_minimum_required(VERSION 3.26)
project(Uez2 C)

set(CMAKE_C_STANDARD 11)

add_executable(Uez2 pyramidCustom.c
        calculator.c
        operations.h
        prime.c
        operations.c)
