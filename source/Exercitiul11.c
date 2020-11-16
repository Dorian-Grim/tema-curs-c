#include <stdio.h>

int main()
{

  int number;
  printf("Introduceti un numar:\n");
  scanf("%d", &number);

  if (number < 100)
  {
    printf("Numarul e mai mic de 100!\n");
  }
  else if (number == 100)
    printf("Numarul este 100!\n");
  else
  {
    printf("Numarul este mai mare decat 100!\n");
  }

  printf("\n");

  return 0;
}

/*
-----output------

Introduceti un numar:
100
Numarul este 100!

------------------
Introduceti un numar:
67
Numarul e mai mic de 100!

-------------------
Introduceti un numar:
102
Numarul este mai mare decat 100!

-------------------
*/