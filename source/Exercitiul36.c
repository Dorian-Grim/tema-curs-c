//programul trebuie sa imprime forma unui caro

#include <stdio.h>

int main()
{
  int i, j, r;
  printf("\nNumarul de randuri (imaginea va fi dubla):");
  scanf("%d", &r);
  for (i = 0; i <= r; i++)
  {
    for (j = 1; j <= r - i; j++)
    {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  for (i = r - 1; i >= 1; i--)
  {
    for (j = 1; j <= r - i; j++)
    {
      printf(" ");
    }
    for (j = 1; j <= (2 * i - 1); j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("\n");
  return 0;
}

/*
-----output------

Numarul de randuri (imaginea va fi dubla):4

   *
  ***
 *****
*******
 *****
  ***
   *

-------------------
*/
