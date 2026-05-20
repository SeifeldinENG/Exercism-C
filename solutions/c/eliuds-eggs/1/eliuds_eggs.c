#include "eliuds_eggs.h"


int egg_count(int decimal) {
    int one_count = 0;

    while (decimal != 0) {
        if (decimal % 2 != 0) {
            one_count++;
        }
        decimal = decimal / 2;
    }

    return one_count;
}
