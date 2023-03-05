cmake_minimum_required(VERSION 3.24)
project(TIP)

set(CMAKE_CXX_STANDARD 14)

include_directories(2/1)

add_executable(TIP
        2/1/main.cpp
        2/1/triangle.cpp
        2/1/triangle.h)

add_executable(TIP
        2/2/circle.cpp
        2/2/circle.h
        2/2/main.cpp)

add_executable(TIP
        2/3/figure.cpp
        2/3/figure.h
        2/3/main.cpp)