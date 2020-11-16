//Programul solicita 5 valori de la consola, le stocheaza intr-un array si le imprima

#include <stdio.h>

int main()
{
  int nums = 5;
  int array[nums];

  printf("\nIntroduceti %d numere intregi separate prin spatiu: ", nums);

  for (int i = 0; i < nums; i++)
  {
    scanf("%d", &array[i]);
  }

  printf("Ati introdus numerele: ");

  for (int i = 0; i < nums; i++)
  {
    printf("%d\n", array[i]);
  }

  printf("\n");
  return 0;
}

/*
-----output------

Introduceti 5 numere intregi separate prin spatiu: 3 4 8 2 4
Ati introdus numerele: 3
4
8
2
4

-------------------
*/