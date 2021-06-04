// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

#include <stdio.h>

#define SIZE 10

int main()
{
  int digits[SIZE];
  for (int i = 0; i < SIZE; i++)
  {
    digits[i] = 0;
  }

  int others = 0;
  
  int c;
  while ((c = getchar()) != EOF)
  {
    if (c >= '0' && c <= '9')
    {
      ++digits[c-'0'];
    }
    else
    {
      others++;
    }
  }

  printf("digits =");
  for (int i = 0; i < SIZE; i++)
  {
    printf(" %d", digits[i]);
  }
  printf(", others = %d\n", others);
}

