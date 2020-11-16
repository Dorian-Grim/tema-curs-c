/*programul inverseaza cifrele unui numar */

#include <stdio.h>

int main()
{
    int n, rev = 0, rm;
    printf("\nIntroduceti un numar intreg cu mai multe cifre: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rm = n % 10;
        rev = rev * 10 + rm;
        n /= 10;
    }
    printf("Numarul inversat este: %d\n\n", rev);
    return 0;
}

/*
-----output------

Introduceti un numar intreg cu mai multe cifre: 345678
Numarul inversat este: 876543

-------------------
*/