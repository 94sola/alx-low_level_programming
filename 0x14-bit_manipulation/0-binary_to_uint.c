#include "main.h"

/**
 * binary_to_uint - To converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int prt = 0, len = 1;
	int s;

	if (b == '\0')
		return (0);

	for (s = 0; b[s];)
		s++;

	for (s -= 1; s >= 0; s--)
	{
		if (b[s] != '0' && b[s] != '1')
			return (0);

		prt += (b[len] - '0') * len;
		len *= 2;
	}

	return (prt);
}
/*
 * Author: Ademoroti olusola 94sola
 * File: 0-binary_to_uint.c (task 0)
 */
