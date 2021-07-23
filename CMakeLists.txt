cmake_minimum_required(VERSION 3.0)
project(test C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(test test.cpp)
target_include_directories(test PUBLIC include)
