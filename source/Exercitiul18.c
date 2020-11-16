#include <stdio.h>
int main()
{
  int num1, num2, num3;

  printf("\nIntroduceti trei numere diferite, separate de spatii:");

  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num2 && num1 > num3)
  {
    printf("\n Primul este cel mai mare");
  }

  else if (num2 > num1 && num2 > num3)
  {
    printf("\n Al doilea este cel mai mare");
  }

  else
  {
    printf("\n Al treilea este cel mai mare");
  }

  printf("\n\n");
  return 0;
}

/*
-----output------

Introduceti trei numere diferite, separate de spatii:4 8 2

 Al doilea este cel mai mare

-------------------
*/
