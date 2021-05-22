// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

class TemperatureTable
{
  public static void main(String[] args)
  {
    for (float fahrenheit = 0; fahrenheit <= 100; fahrenheit += 10) {
      float celsius = (fahrenheit - 32) * 0.55f;
      System.out.printf("%.1ff -> %.1fc\n", fahrenheit, celsius);
    }
  }
}
