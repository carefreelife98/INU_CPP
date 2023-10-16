cmake_minimum_required(VERSION 3.26)
project(C___Codes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Chapter_5_prac)

add_executable(C___Codes
        Chapter_10_Pointer_Prac/singleton.cpp
        Chapter_10_Pointer_Prac/ptrobjs.cpp
        Chapter_10_Pointer_Prac/ptrobjs.cpp
        Chapter_10_Pointer_Prac/doublePointer.cpp
        Chapter_10_Pointer_Prac/doublePointer.cpp
)
