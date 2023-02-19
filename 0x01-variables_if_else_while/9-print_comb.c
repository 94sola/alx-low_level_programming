#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all possible combinations for single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	if (i != '9')
	{
		putchar('44');
		putchar('32');
	}
	}
	putchar('\n');
		return (0);
