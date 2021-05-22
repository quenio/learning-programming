class Temperature
{
  public static void main(String[] args)
  {
    float fahrenheit = 0;
    float celsius = (fahrenheit - 32) * 0.55f;
    System.out.printf("%.1ff -> %.1fc\n", fahrenheit, celsius);  
  }
}
