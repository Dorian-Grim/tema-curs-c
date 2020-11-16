#include <stdio.h>

int putere(int m, int n);

int main()
{
  int a = 3, b = 5;
  int c = putere(a, b);
  printf("\n%d la puterea %d este %d\n", a, b, c);
  printf("\n");
  return 0;
}

int putere(int m, int n)
{
  int i, p = 1;
  for (i = 1; i <= n; i++)
  {
    p = p * m;
  }

  return p;
}

/*
-----output------

3 la puterea 5 este 243

-------------------
*/