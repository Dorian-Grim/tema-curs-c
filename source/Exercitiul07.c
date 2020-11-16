#include <stdio.h>
int main()
{
  int numar;
  int a = 2231;

  printf("\nIntroduceti un numar intreg: ");
  scanf("%d", &numar);
  printf("Ati introdus: %d, suma dintre %d si %d este %d\n\n", numar, numar, a, numar + a);

  return 0;
}

/*
-----output------

Introduceti un numar intreg: 5
Ati introdus: 5, suma dintre 5 si 2231 este 2236

-------------------
*/