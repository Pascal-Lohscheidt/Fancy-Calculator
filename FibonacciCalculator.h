//
// Created by Pascal Lohscheidt on 05.09.20.
//

#ifndef UNTITLED_FIBONACCICALCULATOR_H
#define UNTITLED_FIBONACCICALCULATOR_H
#include "Calculator.h"

class FibonacciCalculator : public Calculator {
    public:
        FibonacciCalculator();
        void RunCalculations();

    private:
        int iterationCount = 0;
        void SolveFibonacci(int counter, long result, long currentResult);

};


#endif //UNTITLED_FIBONACCICALCULATOR_H
