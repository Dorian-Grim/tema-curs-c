#include <stdio.h>

int main()
{
   int num;

   printf("\nIntroduceti un numar: \n");
   scanf("%d", &num);
   if (num > 0)
   {
      printf("%d este pozitiv \n", num);
   }
   else if (num < 0)
   {
      printf("%d este negativ \n", num);
   }
   else
   {
      printf("0 e indecis");
   }
   printf("\n\n");
   return 0;
}

/*
-----output------

Introduceti un numar:
5
5 este pozitiv

Introduceti un numar:
-4
-4 este negativ

-------------------
*/
