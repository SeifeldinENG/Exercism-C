#include "high_scores.h"

int32_t latest(const int32_t *scores, size_t scores_len) {
    return *(scores + scores_len - 1);
}

int32_t personal_best(const int32_t *scores, size_t scores_len) {
    int32_t highest = 0;
    for (size_t i = 0; i < scores_len; i++) {
        int32_t current_number = *(scores + i);
        if (current_number > highest) {
            highest = current_number;
        }
    }
    return highest;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output) {
    size_t number_of_scores;
    
    if (scores_len > 3) {
        number_of_scores = 3;
    } else {
        number_of_scores = scores_len;
    }
    
    int32_t array[scores_len]; 
    for (size_t counter = 0; counter < scores_len; counter++) {
        array[counter] = *(scores + counter);
    }
    
    // bubble sorting
    for (size_t i = 0; i < scores_len - 1; i++) {
        for (size_t j = 0; j < scores_len - i - 1; j++) {
            int32_t *current = array + j;
            int32_t *current_plus_one = array + j + 1;
            if (*current > *current_plus_one) {
                int temp = *current;
                *current = *current_plus_one;
                *current_plus_one = temp;
            }
        }
    }

    for (size_t k = 0; k < number_of_scores; k++) {
        *(output + k) = array[scores_len - 1 - k];
    }

    return number_of_scores;
    
}

