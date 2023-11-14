cmake_minimum_required(VERSION 3.26)
project(C___Codes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C___Codes
        ../Assignments/Iterator/iterator.cpp
        ../Assignments/Iterator/nodeList.cpp
        ../Assignments/Iterator/iteratorMain.cpp
        ../Assignments/DLinkedList/DLinkedListScenario.cpp
        ../Assignments/DLinkedList/DoublyLinkedList.cpp
        OOP/Virtual/assign.cpp
        OOP/Virtual/where.cpp
        OOP/Virtual/dothis.cpp
        OOP/Virtual/assign2.cpp
        Practices/Chapter_12_STL/STL1.cpp
        Practices/Chapter_12_STL/STL1.h
        Practices/Chapter_12_STL/assc_ctnr.cpp
        Practices/Chapter_12_STL/vectcon.cpp
        Practices/Chapter_12_STL/deque.cpp
)
