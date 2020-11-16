/*rezolvarea ecuatiei de gradul 2 */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, rad1, rad2, real, imag;
    printf("\nIntroduceti coeficientii a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // conditie pentru radacini reale sau diferite
    if (discriminant > 0)
    {
        rad1 = (-b + sqrt(discriminant)) / (2 * a);
        rad2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nrad1 = %.2f si rad2 = %.2f", rad1, rad2);
    }

    // conditie pentru radacini reale sau egale
    else if (discriminant == 0)
    {
        rad1 = rad2 = -b / (2 * a);
        printf("\nrad1 = rad2 = %2f", rad1);
    }

    // daca radacinile nu sunt reale
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-discriminant) / (2 * a);
        printf("\nrad1 = %.2lf+%.2lfi si rad2 = %.2f-%.2fi", real, imag, real, imag);
    }
    printf("\n");
    return 0;
}

/*
-----output------

Introduceti coeficientii a, b and c: 2 5 -3
rad1 = 0.50 si rad2 = -3.00

-------------------
*/