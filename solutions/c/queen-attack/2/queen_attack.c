#include "queen_attack.h"
#include <stdlib.h>
#include <stdbool.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    
    int8_t row1 = queen_1.row;
    int8_t col1 = queen_1.column;
    
    int8_t row2 = queen_2.row;
    int8_t col2 = queen_2.column;

    // Check For Invalid locations
    if (row1 > 7 || row2 > 7 || col1 > 7 || col2 > 7) {
        return INVALID_POSITION;
    }
    if (row1 < 0 || row2 < 0 || col1 < 0 || col2 < 0) {
        return INVALID_POSITION;
    }
    if ((row1 - row2 == 0) && (col1 - col2 == 0)) {
        return INVALID_POSITION;
    }

    bool same_row = row1 == row2;
    bool same_col = col1 == col2;
    bool same_diag = abs(row1 - row2) == abs(col1 - col2);

    return (same_row || same_col || same_diag) ? CAN_ATTACK:CAN_NOT_ATTACK;
}
