cmake_minimum_required(VERSION 3.26)
project(Algolang)

set(CMAKE_CXX_STANDARD 11)

add_executable(demo example/main.cpp
        dataDtructure/Algo_string.h
        Algorithm/Algo_sort.h
        Algorithm/Algo_sortvec.h)