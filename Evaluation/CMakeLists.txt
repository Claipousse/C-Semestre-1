cmake_minimum_required(VERSION 3.29)
project(Evaluation C)

set(CMAKE_C_STANDARD 11)

add_executable(Evaluation main.c
        operations.c
        operations.h)
