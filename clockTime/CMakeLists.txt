cmake_minimum_required(VERSION 3.22)
project(clockTime)

set(CMAKE_CXX_STANDARD 14)

add_executable(clockTime clock_time.h clock_time.cpp test.cpp)
