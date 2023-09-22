cmake_minimum_required(VERSION 3.26)
project(C___Codes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Chapter_5_prac)

add_executable(C___Codes
        Chapter_5_prac/const.h
        Chapter_5_prac/const_quiz.cpp
        Chapter_5_prac/stl_string.cpp)
