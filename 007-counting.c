// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

#include <stdio.h>

int main()
{
  int nc = 0;
  while (getchar() != EOF)
    nc++;
  printf("count = %d\n", nc);
}

