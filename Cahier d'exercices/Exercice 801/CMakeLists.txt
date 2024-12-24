cmake_minimum_required(VERSION 3.29)
project(library C)

set(CMAKE_C_STANDARD 11)

add_executable(library main.c
        library.c
        library.h)
