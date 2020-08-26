cmake_minimum_required(VERSION 3.13)
project(c_test_pro C)

set(CMAKE_C_STANDARD 99)

add_executable(c_test_pro main.c)
ADD_SUBDIRECTORY(day01)
ADD_SUBDIRECTORY(day02)
ADD_SUBDIRECTORY(day03)
