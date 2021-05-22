// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

class TemperatureConversion
{
  public static void main(String[] args)
  {
    float fahrenheit = 0;
    float celsius = (fahrenheit - 32) * 0.55f;
    System.out.printf("%.1ff -> %.1fc\n", fahrenheit, celsius);  
  }
}
