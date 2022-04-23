#include <iostream>
#include <math.h>
#include <string>
#include <cmath>

int main(int argc, char**argv) {
    int totalCount = 0;
    double heaviestWeight = 0;
    int heaviestOrder = 0;

    std::cout << "How many numbers? ->";
    std::cin >> totalCount;

    int i;
    for ( i = 1; i <= totalCount; ++i) {
        double current = 0;
        std::cout << "Apple nr." << i << ", grams ->";
        std::cin >> current;

        if (current < 0) {
            break;
        }

        if (current > heaviestWeight) {
            heaviestWeight = current;
            heaviestOrder = i;
        }

        if (i > totalCount) {
            std::cout << "The heaviest apple is" << heaviestOrder << "its order is" << heaviestWeight;
        } else {
            std::cout<< "The improper measurement found";
        }
    }

}