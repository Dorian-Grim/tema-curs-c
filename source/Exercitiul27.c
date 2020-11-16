/*identificarea unui palindrom */

#include <stdio.h>

int main()
{
  int n, reversedN = 0, rem, originalN;
  printf("\nIntroduceti un numar intreg cu mai multe cifre: ");
  scanf("%d", &n);
  originalN = n;

  while (n != 0)
  {
    rem = n % 10;
    reversedN = reversedN * 10 + rem;
    n /= 10;
  }

  if (originalN == reversedN)
  {
    printf("%d este palindrom\n", originalN);
  }
  else
  {
    printf("%d nu este palindrom\n", originalN);
  }
  printf("\n");
  return 0;
}

/*
-----output------

Introduceti un numar intreg cu mai multe cifre: 12321
12321 este palindrom

-------------------
*/