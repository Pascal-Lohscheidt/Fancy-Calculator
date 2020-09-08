cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp FibonacciCalculator.cpp FibonacciCalculator.h Calculator.cpp Calculator.h PrimeNumbersCalculator.cpp PrimeNumbersCalculator.h DigitsOfPiCalculator.cpp DigitsOfPiCalculator.h)