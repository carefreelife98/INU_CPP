cmake_minimum_required(VERSION 3.26)
project(C___Codes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Chapter_5_prac)

add_executable(C___Codes
        Chapter_5_prac/const.h
        Chapter_5_prac/const_quiz.cpp
        Chapter_5_prac/stl_string.cpp
        Chapter_6_overloading/coutpp3.cpp
        Chapter_6_overloading/assignment_2.cpp
        Chapter_8
        Chapter_8_Prac/counten.cpp
        Chapter_8_Prac/protected.cpp)
