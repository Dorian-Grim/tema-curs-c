// descompunere in factori primi

#include <stdio.h>

int main()
{
  int a, d, m;
  printf("\nIntroduceti un numar intreg: ");
  scanf("%d", &a);

  printf("Descompunere in factori primi\n");
  d = 2;
  while (a > 1)
  {
    m = 1;
    printf("%d\n", d);
    a /= d;

    while (a % d == 0)
    {
      a /= d;
      m++;
    }
    d++;

    if (m > 1)
    {
      printf("%d\n", m);
    }
  }

  printf("\n");
  return 0;
}

/*
-----output------

Introduceti un numar intreg: 18
Descompunere in factori primi
2
3
2

-------------------
*/
