#include "pangram.h"
bool is_pangram(const char *sentence) {

    if (!sentence) {
        return false;
    }

    int seen[26] = {0};

    for (int i = 0; sentence[i] != '\0'; i++) {

        char c = sentence[i];

        if (c >= 'A' && c <= 'Z') {
            seen[c - 'A'] = 1;
        }
        else if (c >= 'a' && c <= 'z') {
            seen[c - 'a'] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!seen[i]) {
            return false;
        }
    }

    return true;
}