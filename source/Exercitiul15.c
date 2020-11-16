#include <stdio.h>
int main()
{
   int count, first_term = 0, second_term = 1, next_term, i;

   printf("Introduceti numarul de termeni:\n");
   scanf("%d", &count);

   printf("Primii %d termen al seriei Fibonacci:\n", count);
   for (i = 0; i < count; i++)
   {
      if (i <= 1)
         next_term = i;
      else
      {
         next_term = first_term + second_term;
         first_term = second_term;
         second_term = next_term;
      }
      printf("Termenul %d: %d\n", i, next_term);
   }

   return 0;
}

/*
-----output------

Introduceti numarul de termeni:
7
Primii 7 termen al seriei Fibonacci:
Termenul 0: 0
Termenul 1: 1
Termenul 2: 1
Termenul 3: 2
Termenul 4: 3
Termenul 5: 5
Termenul 6: 8

-------------------
*/
