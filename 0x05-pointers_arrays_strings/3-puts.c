#include "main.h"

/**
*_puts - prints a string
*@str: string to be printed
*Return: the lenght of the string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
