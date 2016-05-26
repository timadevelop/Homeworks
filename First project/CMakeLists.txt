cmake_minimum_required(VERSION 3.5)
project(oopProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp DialogOption.cpp DialogOption.h DialogTree.cpp DialogTree.h DialogNode.cpp DialogNode.h)
add_executable(oopProject ${SOURCE_FILES})