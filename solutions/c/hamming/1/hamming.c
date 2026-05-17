#include "hamming.h"

int compute(const char *lhs, const char *rhs) {

    // Checking for Both lengthes
    int len1 = 0;
    int len2 = 0;
    
    for (int i = 0; *(lhs + i) != '\0'; i++) {
        len1++;
    }
    for (int j = 0; *(rhs + j) != '\0'; j++) {
        len2++;
    }
    if (len1 != len2) {
        return -1;
    }

    // Checking the differences
    int diff = 0;
    for (int k = 0; k < len1; k++) {
        if (lhs[k] != rhs[k]) {
            diff++;
        }
    }
    return diff;
}

