cmake_minimum_required(VERSION 3.10)

project(MyProject)
include_directories(inc)
add_executable(MyProject main.cpp)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
#add_subdirectory(inc)
