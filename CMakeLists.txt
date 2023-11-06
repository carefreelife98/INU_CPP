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
)
