#include "space_age.h"

int EarthYearInSeconds = 31557600; 

float Orbital_per_earthyear[] = {0.2408467, 0.61519726, 1.0, 1.8808158, 11.862615, 29.447498, 84.016846, 164.79132};

float age(planet_t planet, int64_t seconds) {

    if (planet < MERCURY || planet > NEPTUNE) return -1;
    
    float earth_years = (float)seconds / EarthYearInSeconds;

    float planet_years = earth_years / Orbital_per_earthyear[planet];

    return planet_years;
}

