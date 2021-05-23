// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

#include <stdio.h>

int main()
{
  int count = 0;
  int c;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
    {
      count++;
    }
  }
  printf("line count = %d\n", count);
}

