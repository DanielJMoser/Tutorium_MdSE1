cmake_minimum_required(VERSION 3.26)
project(Uez1 C)

set(CMAKE_C_STANDARD 23)

add_executable(Uez1 Pyramide.c
        Summenberechnung.c
        Ungerade.c)
add_executable(Summenberechnung Summenberechnung.c)
