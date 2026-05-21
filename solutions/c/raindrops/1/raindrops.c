#include "raindrops.h"
#include <stdio.h>

void convert(char result[], int drops) {
    char *sound = result;

    if (drops % 3 == 0) {
        char *three = "Pling";
        while (*three) {
            *sound++ = *three++;
        }
    }
    
    if (drops % 5 == 0) {
        char *five = "Plang";
        while (*five) {
            *sound++ = *five++;
        }
    }

    if (drops % 7 == 0) {
        char *seven = "Plong";
        while (*seven) {
            *sound++ = *seven++;
        }
    }
    


    if ((drops % 7 != 0) && (drops % 5 != 0) && (drops % 3 != 0)) {
        sprintf(result, "%d", drops);
        return;
    }
    *sound = '\0';
}
