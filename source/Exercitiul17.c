#include <stdio.h>
int main()
{
  int num1, num2;

  printf("\nIntroduceti doua numere diferite, separate de spatii:");

  scanf("%i %i", &num1, &num2);

  if (num1 > num2)
  {
    printf("\n Numarul 1 mai mai mare decat numarul 2");
  }
  else if (num1 == num2)
  {
    printf("\n Cele doua numere sunt egale");
  }
  else
  {
    printf("\n Numarul 2 este mai mare decat numarul 1");
  }
  printf("\n\n");

  return 0;
}

/*
-----output------

Introduceti doua numere diferite, separate de spatii:4 8

 Numarul 2 este mai mare decat numarul 1

-------------------
*/
