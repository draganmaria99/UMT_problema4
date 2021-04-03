cmake_minimum_required(VERSION 3.17)
project(Parola)

set(CMAKE_CXX_STANDARD 14)

add_executable(Parola main.cpp tests.cpp tests.h main.h functions.cpp functions.h)