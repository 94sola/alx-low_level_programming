/*
 * Author: Ademoroti olusola 94sola
 * File: print binary.c (task 1)
 */

#include "main.h"

/**
 * print_binary - To prints the binary representation of a number
 * @n: number of printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int ola, last;
	char dems;

	dems = 0;
	ola = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (ola != 0)
	{
		last = n & ola;
		if (last == ola)
		{
			dems = 1;
			_putchar('1');

		}
		else if (dems == 1 || ola == 1)
		{
			_putchar('0');
		}
		ola >>= 1;
	}
}
/**
 * _power - To calculate the base and power
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int ford;
	unsigned int v;

	ford = 1;
	for (v = 1; v <= pow; v++)
		ford *= base;
	return (ford);
}
