cmake_minimum_required(VERSION 3.24)
project(TIP)

set(CMAKE_CXX_STANDARD 14)

add_executable(TIP2_1
        2/1/main.cpp
        2/1/triangle.cpp
        2/1/triangle.h)

add_executable(TIP2_2
        2/2/circle.cpp
        2/2/circle.h
        2/2/main.cpp)

add_executable(TIP2_3
        2/3/figure.cpp
        2/3/figure.h
        2/3/main.cpp)

add_executable(TIP3_1
        3/1/eq.cpp
        3/1/eq.h
        3/1/main.cpp)

add_executable(TIP3_2
        3/2/rational.cpp
        3/2/rational.h
        3/2/main.cpp)

add_executable(TIP3_3
        3/3/rational.cpp
        3/3/rational.h
        3/3/main.cpp)