#include <iostream>
#include "FibonacciCalculator.h"
#include "PrimeNumbersCalculator.h"
using namespace std;

int HandleConsoleSetup(); // this thing is called prototype
int ChooseCommand();

int main() {
    FibonacciCalculator fiboCalc;
    PrimeNumbersCalculator primeCalc;
    int decision;

    HandleConsoleSetup();

    decision = ChooseCommand();

    while (decision != 3) {
        switch (decision) {
            case '0':
                cout << "-> Fibonacci sequence calculator:" << endl;
                fiboCalc.RunCalculations();
                break;
            case '1':
                cout << "-> Prime number calculator:" << endl;
                primeCalc.RunCalculations();
                break;
            case '2':
                cout << "-> Digits of pi calculator:" << endl;
                break;
            default:
                break;
        }
        cin.get();
        cin.sync();
        decision = ChooseCommand();
    }


    cin.sync();
    cin.get();

    return 0;
}


int HandleConsoleSetup()
{
    cout << "------- Fancy-Calc ------" << endl;
    cout << "--------- V1.0 ----------" << endl;
    cout << "-------------------------" << endl;
    cout << "" << endl;
}

int ChooseCommand() {
    cout << "-------------------------" << endl;
    cout << "Chose your command" << endl;
    cout << "0 - Fibonacci sequence" << endl;
    cout << "1 - Prime numbers" << endl;
    cout << "2 - Digits of Pi" << endl;
    cout << "3 - End Calc" << endl;
    return cin.get();
}



