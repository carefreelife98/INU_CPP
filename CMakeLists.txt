cmake_minimum_required(VERSION 3.26)
project(C___Codes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C___Codes
        Practices/Final_Class/xstack.cpp
        Assignment/Exceptions/arrover.cpp
        Assignment/TempLinkedList/SafeArr.h
        Practices/Final_Class/auto.cpp
        Practices/Final_Class/intro.cpp
        Practices/Final_Class/unique.cpp
        FinalTerm/QuickReview/array.cpp
        FinalTerm/QuickReview/string.cpp
        FinalTerm/QuickReview/new.cpp
        FinalTerm/QuickReview/references.cpp
        FinalTerm/QuickReview/argsPass.cpp
        FinalTerm/QuickReview/initializer.cpp
        FinalTerm/QuickReview/pointer.cpp
)
