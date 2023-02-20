#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible combination of 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
	for (b = a + 1; a < 9; b++)
	{
	for (c = b + 1; c < 10; c++)
	{
		if (a != b && a != c && b != c)
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(c + '0');

		if (a + b + c < 24)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
