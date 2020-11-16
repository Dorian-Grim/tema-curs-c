#include <stdio.h>

/* Schimba valorile celor doua variabile intre ele */

int main()
{
  int a, b, temp;

  a = 11;
  b = 99;

  printf("\nInainte de schimb: \n a = %d, b = %d \n\n", a, b);

  temp = a;
  a = b;
  b = temp;

  printf("Dupa schimb: \n a = %d, b = %d \n\n", a, b);
}

/*
-----output------

Inainte de schimb:
 a = 11, b = 99

Dupa schimb:
 a = 99, b = 11

-------------------
*/
