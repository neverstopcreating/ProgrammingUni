#include <iostream>
#include <math.h>
#include <string>
#include <cmath>

int main(int argc, char**argv) {
//    double currentNumber = 0;
//    int numberTotal = 0;
//    int totalPositive = 0;
//
//    std::cout << "How many numbers are there in total? ->" ;
//    std::cin >> numberTotal;
//
//    for (int i = 1; i <= numberTotal; i++) {
//        std::cout << "What would be current number?";
//        std::cin >> currentNumber;
//        if (currentNumber > 0) {
//            totalPositive++;
//        }
//    }
//    std::cout << "There were " << totalPositive << " positive numbers";

    double currentNumber = 0;
    int totalPositive = 0;

    do {
        std::cout << "What is your number? ->" ;
        std::cin >> currentNumber;
        if (currentNumber > 0) {
            totalPositive++;
        }
    } while ( currentNumber != 0);

    std::cout << "There were " << totalPositive << " positive numbers";
}