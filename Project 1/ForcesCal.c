/* This program lets the user calculate the forces exerted 
between the masses of Sun, Moon, and Earth. 
*/ 

#include <stdio.h>
#include <math.h>
#define MASS_OF_SUN 1.99e30
#define MASS_OF_EARTH 5.98e24
#define MASS_OF_MOON 7.36e22
#define SUN_EARTH_DIST 1.496e11
#define MOON_EARTH_DIST 3.84e8
#define G 6.67e-11 //Gravitational constant

/* To calculate the gravitational force: F = (G * m1 * m2)/ (r^2), 
Source: https://en.wikipedia.org/wiki/Newton%27s_law_of_universal_gravitation 
*/ 
   
int main(void)
{
   double forceSM, forceEM, forceSE;
   
   forceSM = (G * MASS_OF_SUN * MASS_OF_MOON) / (pow(SUN_EARTH_DIST - MOON_EARTH_DIST, 2.0));
   forceEM = (G * MASS_OF_EARTH * MASS_OF_MOON) / (pow(MOON_EARTH_DIST, 2.0));
   forceSE = (G * MASS_OF_SUN * MASS_OF_EARTH) / (pow(SUN_EARTH_DIST, 2.0));
   
   printf("The Force exerted by the Sun on the Moon: %.2le N\n", forceSM);
   printf("The Force exerted by the Earth on the Moon: %.2le N\n", forceEM);
   printf("The Force exerted by the Sun on the Earth: %.2le N\n", forceSE);
   
   return 0;
   
}