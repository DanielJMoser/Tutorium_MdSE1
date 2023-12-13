cmake_minimum_required(VERSION 3.26)
project(Uez1_tut C)

set(CMAKE_C_STANDARD 23)

add_executable(Uez1_tut sum.c
        potenz2.c
        Ungerade.c
        pyramid.c
)

add_executable(potenz2 potenz2.c)

add_executable(pyramide pyramid.c)