cmake_minimum_required(VERSION 3.17)

project(splitcmakeLib)

include(../cmake/CPM.cmake)
message("I'm lib/CMakeLists.txt")
include(../cmake/Tools.cmake)

add_library(splitcmakeLib stuff.cpp stuff.h)

cxx_17()