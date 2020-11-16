#include <stdio.h>

int main()
{
	int i, j, rows;
	const char c = '*';

	printf("\n");
	printf("Introduceti numarul de randuri: ");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("\n");
	return 0;
}

/*
-----output------

Introduceti numarul de randuri: 5
*
* *
* * *
* * * *
* * * * *

-------------------
*/
