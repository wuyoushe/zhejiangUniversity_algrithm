cmake_minimum_required(VERSION 3.13)
project(day01 C)

set(CMAKE_C_STANDARD 99)
include_directories(.)
#SET(day01 main.c) 记得重新Reload CMake
ADD_EXECUTABLE(main main.c)
ADD_EXECUTABLE(binary BinaryTree.c )
ADD_EXECUTABLE(stack stack.c)

