// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

#include <stdio.h>

#define OUTSIDE_WORD 0
#define INSIDE_WORD 1

int main()
{
  int count = 0;
  int state = OUTSIDE_WORD;
  int c;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\t' || c == '\n')
    {
      state = OUTSIDE_WORD;
    }
    else if (state == OUTSIDE_WORD)
    {
      state = INSIDE_WORD;
      count++;
    }
  }
  printf("word count = %d\n", count);
}

