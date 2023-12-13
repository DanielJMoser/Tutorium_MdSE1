cmake_minimum_required(VERSION 3.26)
project(Uez2_tut C)

set(CMAKE_C_STANDARD 11)

add_executable(pyramidCustom
        pyramidCustom.c
        operations.c
        operations.h
        calculator.c
        prime.c)
