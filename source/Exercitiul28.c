/*verifica daca un numar este prim */

#include <stdio.h>

int main()
{
  int n, i, flag = 0;
  printf("\nIntroduceti un numar intreg pozitiv: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      flag = 1;
      break;
    }
  }
  if (n == 1)
  {
    printf("1 nu intra in discutie\n");
  }
  else
  {
    if (flag == 0)
    {
      printf("%d este un numar prim\n", n);
    }
    else
    {
      printf("%d nu este un numar prim\n", n);
    }
  }
  printf("\n");
  return 0;
}

/*
-----output------

Introduceti un numar intreg pozitiv: 31
31 este un numar prim

-------------------
*/