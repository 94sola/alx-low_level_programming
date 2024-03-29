 #include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: head pointer of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
/*
 * File: 1-listint_len.c
 * Author: Ademoroti olusola (94sola)
*/
