#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H
#include <math.h>

typedef enum {
    OHMS = 0,
    KILOOHMS = 3,
    MEGAOHMS = 6,
    GIGAOHMS = 9
} unit_t;

typedef struct {
    int value;
    unit_t unit;
} resistor_value_t;

typedef enum {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

resistor_value_t color_code(resistor_band_t bands[]);

#endif
