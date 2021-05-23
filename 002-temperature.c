// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

#include <stdio.h>

int main()
{
  float fahrenheit = 0;
  float celsius = (fahrenheit - 32) * 0.55;
  printf("%1.0fF -> %5.1fC\n", fahrenheit, celsius);  
}
