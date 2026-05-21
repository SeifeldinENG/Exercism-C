#include "two_fer.h"

void two_fer(char *buffer, const char *name) {

    char *no_name;

    if (!name) {
        no_name = "One for you, one for me.";
    }

    char *text = buffer;

    if (name) {
        const char *prefix = "One for ";
        const char *suffix = ", one for me.";

        while (*prefix) {
            *text++ = *prefix++;
        }
        while (*name) {
            *text++ = *name++;
        }
        while (*suffix) {
            *text++ = *suffix++;
        }
    } else {
            while (*no_name) {
                *text++ = *no_name++;
            }
        }
    *text = '\0';
}
