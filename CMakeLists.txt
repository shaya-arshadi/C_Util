cmake_minimum_required(VERSION 3.3)
project(C_Util)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp lcm_hcf.cpp lcm_hcf.h)
add_executable(C_Util ${SOURCE_FILES})