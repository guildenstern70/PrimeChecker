cmake_minimum_required(VERSION 3.14)
project(IsPrime)

set(CMAKE_CXX_STANDARD 14)

add_executable(IsPrime main.cpp PrimeChecker.cpp PrimeChecker.h)