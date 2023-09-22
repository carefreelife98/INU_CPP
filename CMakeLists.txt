cmake_minimum_required(VERSION 3.26)
project(C___Codes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Chapter_5)

add_executable(C___Codes
        Chapter_5/const.h
        Chapter_5/const_quiz.cpp)
