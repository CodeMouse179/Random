cmake_minimum_required(VERSION 3.11)

set(CMAKE_CXX_STANDARD 11)

project(SystemRandom)

add_executable(sr
    Random.hpp
    Example.cpp
)