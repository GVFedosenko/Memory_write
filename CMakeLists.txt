cmake_minimum_required(VERSION 3.17)
project(Memory_write)

set(CMAKE_CXX_STANDARD 20)

add_executable(Memory_write main.cpp Carrier.h Mechanical_recording.h flash_recording.h)