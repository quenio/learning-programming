#include <stdio.h>

int main()
{
  for (float fahrenheit = 0; fahrenheit <= 100; fahrenheit += 10)
  {
    float celsius = (fahrenheit - 32) * 0.55;
    printf("%.1ff -> %.1fc\n", fahrenheit, celsius);
  }
}
