cmake_minimum_required(VERSION 3.17)

project(splitcmakeTests)

include(../cmake/CPM.cmake)
message("I'm lib/CMakeLists.txt")
include(../cmake/Tools.cmake)

CPMAddPackage("gh:onqtam/doctest#2.4.5")

add_executable(splitcmakeTests main.cpp something.cpp)

include_directories(${CMAKE_SOURCE_DIR}/lib)

target_link_libraries(splitcmakeTests splitcmakeLib)
target_link_libraries(splitcmakeTests doctest::doctest)

cxx_17()