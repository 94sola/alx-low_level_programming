#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number  of i
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ives;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	ives = ~(1 << index);
	*n = *n & ives;

	return (1);
}
/*
 * Author: Ademoroti olusola 94sola
 * File: clear bit (task 4)
 */
