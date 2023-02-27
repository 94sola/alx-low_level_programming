#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array
* @a : array
* @n: number of value to be printed
*/

void print_array(int *a, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		printf("%d", a[a]);
		if (a != n - 1)
			printf(", ");
	}
	printf("\n");
}
