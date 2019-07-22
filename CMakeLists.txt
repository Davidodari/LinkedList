cmake_minimum_required(VERSION 3.13)
project(List C)

set(CMAKE_C_STANDARD 99)

add_executable(List main.c linked_list.c linked_list.h)