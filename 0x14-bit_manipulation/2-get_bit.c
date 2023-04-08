#include "main.h"

/**
 * get_bit - To gets the value of a bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: If an error occurs - -1 the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int sol, dems;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	dems = 1 << index;
	sol = n & dems;
	if (sol == dems)
		return (1);

	return (0);
}
/*
 * Author: Ademoroti olusola 94sola
 * File: get bit (task 2)
 */
