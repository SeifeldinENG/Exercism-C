#include "collatz_conjecture.h"

int steps(int start) {
    int number = start;
    int steps = 0;
    
    if (number < 1) {
        return -1;
    }

    while (number > 1) {
        if (number % 2 == 0) {
            number = number / 2;
        } else {
            number = number * 3 + 1;
        }
        steps++;
    }

    return steps;
}