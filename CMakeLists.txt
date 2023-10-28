cmake_minimum_required(VERSION 3.26)
project(C___Codes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Practices/Chapter_5_prac)

add_executable(C___Codes
        OOP/Midterm/p1.cpp
        OOP/Midterm/p2.cpp
        OOP/Midterm/p5.cpp
        OOP/Midterm/p7.cpp
        OOP/Midterm/p9.cpp
        Practices/Virtual_Function/polymorphism.cpp
        Practices/Virtual_Function/polymorphism.cpp
        Practices/Virtual_Function/abstract_class.cpp
        Practices/Virtual_Function/abstract_class.cpp
        Practices/Virtual_Function/virtualDest.cpp
        Practices/Virtual_Function/virtualDest.cpp
        Practices/Virtual_Function/virtual_base_classes.cpp
)
