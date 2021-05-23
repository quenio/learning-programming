// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

#include <stdio.h>

#define LOWER 0
#define UPPER 100
#define STEP 10

#define ZERO_C_IN_F 32
#define APPROX_C_TO_F_RATIO .55

int main()
{
  for (float fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit += STEP)
  {
    float celsius = (fahrenheit - ZERO_C_IN_F) * APPROX_C_TO_F_RATIO;
    printf("%3.0fF -> %5.1fC\n", fahrenheit, celsius);
  }
}
