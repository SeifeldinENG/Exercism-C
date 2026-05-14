#include "binary.h"
int convert(const char *input) {
    int output = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != '0' && input[i] != '1') {
            return -1;
        }

        output = (output << 1) + (input[i] - '0');
    }
    
    return output;
}