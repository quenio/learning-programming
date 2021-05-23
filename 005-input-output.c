// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

#include <stdio.h>

int main()
{
  int c = getchar();
  while (c != EOF)
  {
    putchar(c);
    putchar(c);
    c = getchar();
  }
}

