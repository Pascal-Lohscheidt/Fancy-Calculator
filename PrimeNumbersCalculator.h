//
// Created by Pascal Lohscheidt on 06.09.20.
//

#ifndef UNTITLED_PRIMENUMBERSCALCULATOR_H
#define UNTITLED_PRIMENUMBERSCALCULATOR_H
#include "Calculator.h"


class PrimeNumbersCalculator : Calculator {
public:
    PrimeNumbersCalculator();
    void RunCalculations();

private:
    int primeCount;
    void PrintPrime(long prime, int primeCount);

};


#endif //UNTITLED_PRIMENUMBERSCALCULATOR_H
