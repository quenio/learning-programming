#include <stdio.h>

int main()
{
  float fahrenheit = 0;
  float celsius = (fahrenheit - 32) * 0.55;
  printf("%.1ff -> %.1fc\n", fahrenheit, celsius);  
}
