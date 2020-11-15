#include <stdio.h>

int main()
{
	int i, j, rows;
	const char c = '*';

	printf("\n");
	printf("Introduceti numarul de randuri: ");
	scanf("%d", &rows);

	for (i = rows; i >= 1; i--)
	{
		for (j = i; j <= rows; j++)
		{
			printf("%c", c);
			if (j != i - 1)
			{
				printf(" ");
			}
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
