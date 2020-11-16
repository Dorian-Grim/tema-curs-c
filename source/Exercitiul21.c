#include <stdio.h>

int main()
{
  int num = 0;

  printf("Introduceti un numar:\n");
  scanf("%d", &num);

  if (num == 0)
  {
    printf("numarul este zero\n");
  }

  if (num % 2 == 0)
  {
    printf("%d este par\n", num);
  }

  if (num % 2 != 0)
  {
    printf("%d este impar\n", num);
  }

  printf("\n");

  return 0;
}

/*
-----output------

Introduceti un numar:
4
4 este par

-----------------

Introduceti un numar:
5
5 este impar

-------------------
*/
