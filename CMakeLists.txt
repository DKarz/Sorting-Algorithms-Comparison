cmake_minimum_required(VERSION 3.13)
project(problem_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(problem_2 main.cpp InsertionSort.h func.h MergeSort.h QuickSort.h "RadixSort .h" CountingSort.h time.cpp)