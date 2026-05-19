#include "rna_transcription.h"

char *to_rna(const char *dna) {
    int length = 0;
    for (int i = 0; *(dna + i) != '\0'; i++) {
        length++;
    }

    char *rna = malloc(length + 1);
    
    for (int i = 0; i < length; i++) {
        char temp = *(dna + i);
        if (temp == 'G') {
            *(rna + i) = 'C';
        } else if (temp == 'C') {
            *(rna + i) = 'G';
        } else if (temp == 'T') {
            *(rna + i) = 'A';
        } else if (temp == 'A') {
            *(rna + i) = 'U';
        }
    }
    *(rna + length) = '\0';
    return rna;
}

