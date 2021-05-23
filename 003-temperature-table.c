// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

#include <stdio.h>

int main()
{
  for (float fahrenheit = 0; fahrenheit <= 100; fahrenheit += 10)
  {
    float celsius = (fahrenheit - 32) * 0.55;
    printf("%3.0fF -> %5.1fC\n", fahrenheit, celsius);
  }
}
