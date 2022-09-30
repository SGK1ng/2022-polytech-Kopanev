cmake_minimum_required(VERSION 3.23)
project(02_compiler)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(02_compiler
        func.cpp
        func.h
        hello_world.cpp)
