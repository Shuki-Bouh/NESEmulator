cmake_minimum_required(VERSION 3.29)
project(NESEmulator)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_executable(NESEmu src/main.cpp
        src/registers.cpp
        src/registers.h
)

add_executable(TestNESEmu
        test/test_main.cpp
)

add_test(NAME TestNESEmu COMMAND TestNESEmu)
