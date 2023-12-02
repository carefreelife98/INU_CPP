cmake_minimum_required(VERSION 3.26)
project(C___Codes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C___Codes
        Practices/Final_Class/xstack.cpp
        Assignment/Exceptions/arrover.cpp
        Assignment/TempLinkedList/SafeArr.h
)
