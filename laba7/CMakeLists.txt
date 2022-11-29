cmake_minimum_required(VERSION 3.23)
project(OAIP_Melyukh C)

set(CMAKE_C_STANDARD 99)

add_executable(OAIP_Melyukh main.c cmake-build-debug/Header.h cmake-build-debug/Header.cpp)
