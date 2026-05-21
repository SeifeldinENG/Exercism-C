#include "two_fer.h"
#include <string.h>
#include <stdio.h>

#define SIZE 100

void two_fer(char *buffer, const char *name) {

    if (!name) {
        strcpy(buffer, "One for you, one for me.");
    } else {
        snprintf(buffer, SIZE, "One for %s, one for me.", name);
    }
}
