#include "resistor_color_trio.h"
#define GIGA 1000000000
#define MEGA 1000000
#define KILO 1000

resistor_value_t color_code(resistor_band_t bands[]) {

    double bands_value = bands[0] * 10 + bands[1];
    resistor_value_t color_code;
    
    for (int i = 0; i < (int)bands[2]; i++) {
        bands_value *= 10;
    }

    if (bands_value >= GIGA) {
        bands_value = bands_value / GIGA;
        color_code.value = bands_value;
        color_code.unit = GIGAOHMS;
    } else if (bands_value >= MEGA) {
        bands_value = bands_value / MEGA;
        color_code.value = bands_value;
        color_code.unit = MEGAOHMS;
    } else if (bands_value >= KILO) {
        bands_value = bands_value / KILO;
        color_code.value = bands_value;
        color_code.unit = KILOOHMS;
    } else  {
        color_code.value = bands_value;
        color_code.unit = OHMS;
    }
    


    return color_code;
}

