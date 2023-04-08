#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0. If little-endian - 1.
 */
int get_endianness(void)
{

	int sol;
	char *soj;

	sol = 1;
	soj = (char *)&sol;

	return (*soj);
}
/*
 * Author: Ademoroti olusola 94sola
 * File: 100-get_endianness.c (task 6)
 */
