#include <stdio.h>

int main()
{
  int a = 34;
  int b = 11;
  double c = (double)a / (double)b;

  printf("\nNumarul %d impartit la numarul %d este: %f\n\n", a, b, c);
  return 0;
}

/*
-----output------

Numarul 34 impartit la numarul 11 este: 3.090909

-------------------
*/
