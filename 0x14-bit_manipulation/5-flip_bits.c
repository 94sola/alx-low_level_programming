/*
 * Author: Ademoroti olusola 94sola
 * File: flip bit (task 5)
 */

#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dove, baby;
	unsigned int len, prt;

	len = 0;
	baby = 1;
	dove = n ^ m;
	for (prt = 0; prt < (sizeof(unsigned long int) * 8); prt++)
	{
		if (baby == (dove & baby))
			len++;
		baby <<= 1;
	}

	return (len);
}

