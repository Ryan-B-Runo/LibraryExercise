cmake_minimum_required(VERSION 3.29)
project(LibraryExercise)

set(CMAKE_CXX_STANDARD 20)

add_executable(LibraryExercise main.cpp
        Library.h
        PhoneNumber.h
        PhoneNumber.cpp
        Address.h
        Address.cpp
        Library.cpp
        Book.h
        Book.cpp)
