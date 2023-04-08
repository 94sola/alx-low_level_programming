#include "main.h"

/**
 * binary_to_uint - To converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int s;
	unsigned int prt;

	prt = 0;
	if (!b)
		return (0);
	for (s = 0; b[s] != '\0'; s++)
	{
		if (b[s] != '0' && b[s] != '1')
			return (0);
	}
	for (s = 0; b[s] != '\0'; s++)
	{
		prt <<= 1;
		if (b[s] == '1')
			prt += 1;
	}
	return (prt);
}
/*
 * Author: Ademoroti olusola 94sola
 * File: 0-binary_to_uint.c (task 0)
 */
