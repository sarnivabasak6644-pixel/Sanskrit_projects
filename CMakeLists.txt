cmake_minimum_required(VERSION 3.5)
project(Sanskrit_projects C)
set(CMAKE_C_STANDARD 11)
include_directories(.)
add_executable(Sanskrit_projects
        namaste.c
        lexer.h)
