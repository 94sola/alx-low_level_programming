/*
 * Author: Ademoroti olusola 94sola
 * File: set bit (task 3)
 */

#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @index: starting from 0 of the bit you want to set
 * @n: A pointer to the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int soj;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	soj = 1 << index;
	*n = *n | soj;

	return (1);
}
