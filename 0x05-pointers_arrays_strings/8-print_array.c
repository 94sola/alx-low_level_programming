#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array
* @a : array
* @n: number of value to be printed
*/

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)

	if (t != n - 1)
		printf("%d, ", a[t]);
	else
		printf("%d", a[t]);
	printf("\n");
}
