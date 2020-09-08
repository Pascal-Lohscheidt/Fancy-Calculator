//
// Created by Pascal Lohscheidt on 06.09.20.
//

#include <iostream>
#include "PrimeNumbersCalculator.h"

PrimeNumbersCalculator::PrimeNumbersCalculator() : Calculator(){

}

void PrimeNumbersCalculator::RunCalculations() {
    int currentPrimeCount = 0;
    long currentNumber = 3;

    std::cout << "How many primes shall be calculated:" << std::endl;
    std::cin >> primeCount;
    std::cout << "Choosen prime count: " << primeCount << std::endl;

    std::cout << "2, "; //printing 2
    long checkedPrimes[primeCount];

    checkedPrimes[0] = 2;
    currentPrimeCount++;

    while(currentPrimeCount < primeCount)
    {
        bool shouldJumpToNext = false;
        for (int i = 0; i < currentPrimeCount; ++i) {
            if(currentNumber % checkedPrimes[i] == 0)
            {
                currentNumber++;
                shouldJumpToNext = true;
                break;
            }
        }
        if(shouldJumpToNext) continue; //Prime factor test was positive so jump

        PrintPrime(currentNumber, currentPrimeCount);

        checkedPrimes[currentPrimeCount] = currentNumber;
        currentPrimeCount++;
        currentNumber++;
    }

    std::cout << std::endl;
    std::cout << "Done. Showing " << primeCount <<" prime Numbers." << std::endl;
}


void PrimeNumbersCalculator::PrintPrime(long prime, int primeCount) {
    if(primeCount % 10 == 0) std::cout << std::endl;
    std::cout << prime << ", " << std::ends;
}

