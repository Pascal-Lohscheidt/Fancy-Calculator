//
// Created by Pascal Lohscheidt on 05.09.20 at ~ 23:40.
//
#include <iostream>
#include "FibonacciCalculator.h"
#include "math.h"


FibonacciCalculator::FibonacciCalculator() : Calculator() {}

void FibonacciCalculator::RunCalculations() {

    std::cout << "How many iterations shall be runned:" << std::endl;
    std::cin >> iterationCount;
    std::cout << "Choosen iteration count: " << iterationCount << std::endl;

    if(iterationCount > 91) {
        iterationCount = 91;
        std::cout << "Not able to have more than 91 iterations. Thereby the iteration count was limited." << std::endl;
        std::cout << "Press Enter to continue" << std::endl;
        std::cin.sync();
        std::cin.get();
    }

    std::cout << "Starting printing sequence" << std::endl;
    SolveFibonacci(0, 1, 1);
    std::cout << "Finished after showing " << iterationCount << " results" << std::endl;
};

void FibonacciCalculator::SolveFibonacci(int counter, long lastResult, long currentResult) {
    std::cout << lastResult << std::endl; //  ";" << (log(lastResult) / log(2.718282)) <<

    if(counter < iterationCount)
        SolveFibonacci(counter+1, currentResult, lastResult + currentResult);
};