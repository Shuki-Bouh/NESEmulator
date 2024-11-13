cmake_minimum_required(VERSION 3.29)
project(NESEmulator)

set(CMAKE_CXX_STANDARD 20)

add_executable(NESEmu src/main.cpp
        src/registers.cpp
        src/registers.h)
