#include "grains.h"
#include <math.h>
uint64_t square(uint8_t index) {
    uint64_t grains = pow(2,(index-1));
    return grains;
}

uint64_t total(void) {
    int n = 64;
    uint64_t grains = 0;
    uint64_t multi = 0;
    for (int i = 0; i < n; i++) {
        multi = pow(2,(i));
        grains = grains + multi;
    }
    return grains;
}

