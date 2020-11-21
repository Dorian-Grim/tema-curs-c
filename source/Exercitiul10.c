#include <stdio.h>

int main()
{
  int i, j, k, rows;

  printf("\nIntroduceti numarul de randuri: ");
  scanf("%d", &rows);

  for (i = 1; i <= rows; i++)
  {
    for (k = 1; k <= rows - i; k++)
    {
      printf("  ");
    }
    for (j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n");
  return 0;
}

/*
-----output------

Introduceti numarul de randuri: 6
          *
        * *
      * * *
    * * * *
  * * * * *
* * * * * *

-------------------
*/