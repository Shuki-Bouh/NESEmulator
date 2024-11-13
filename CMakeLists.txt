cmake_minimum_required(VERSION 3.28)
project(NESEmulator)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_executable(NESEmu
        src/main.cpp
        src/registers.cpp
        src/registers.h
)

add_executable(Test test/test_test.cpp)
add_test(NAME Test COMMAND Test)
