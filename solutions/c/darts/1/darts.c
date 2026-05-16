#include "darts.h"
#include <math.h>

#define R_INNER 1
#define R_MIDDLE 5
#define R_OUTER 10

uint8_t score(coordinate_t pos) {
     float distance = sqrt(pow(pos.x,2) + pow(pos.y,2));

    // From in to out
    if (distance <= R_INNER) {
        return 10; // Earn 10 Points
    } else if (distance <= R_MIDDLE) {
        return 5; // Earn 5 Points
    } else if (distance <= R_OUTER) {
        return 1; // Earn 1 Point
    } else {
        return 0; // No Points
    }
}