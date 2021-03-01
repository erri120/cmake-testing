cmake_minimum_required(VERSION 3.17)

project(splitcmake)

include(../cmake/CPM.cmake)
message("I'm exe/CMakeLists.txt")
include(../cmake/Tools.cmake)

add_executable(splitcmake main.cpp)

include_directories(${CMAKE_SOURCE_DIR}/lib)
target_link_libraries(splitcmake splitcmakeLib)

cxx_17()