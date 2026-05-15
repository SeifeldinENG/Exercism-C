#include "queen_attack.h"

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

    // Check For Same Row
    if (row1 - row2 == 0) {
        return CAN_ATTACK;
    }
    
    // Check For Same col
    if (col1 - col2 == 0) {
        return CAN_ATTACK;
    }

    // Check For Same Diagnoal
    uint8_t diff1 = row1 - col1;
    uint8_t diff2 = row2 - col2;
    uint8_t sum1 = row1 + col1;
    uint8_t sum2 = row2 + col2;
    if ((diff1 == diff2) || (sum1 == sum2)) {
        return CAN_ATTACK;
    }


    return CAN_NOT_ATTACK;
}
