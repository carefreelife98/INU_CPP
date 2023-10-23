cmake_minimum_required(VERSION 3.26)
project(C___Codes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Practices/Chapter_5_prac)

add_executable(C___Codes
        MidTerm/QuickReview.cpp
        Practices/Avengers/MyAvengers.h

)
