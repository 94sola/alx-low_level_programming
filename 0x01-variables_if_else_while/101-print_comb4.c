#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all possible different combination of 3 digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 100; i++)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* singles */

		if (j < k && k < l)
	{
		putchar(j + '0');
		putchar(k + '0');
		putchar(l + '0');

		if (i < 700)
	{
		putchar(44);
		putchar(32);
	}
	}
	}
	putchar('\n');

	return (0);
}
