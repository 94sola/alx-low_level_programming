#include "lists.h"

/**
 * print_dlistint - to prints all the elements of a
 * dlistint_t list
 *
 * @h: A head of the lists
 * Return: the numbers in the  nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int court;

	court = 0;

	if (h == NULL)
		return (court);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		court++;
		h = h->next;
	}

	return (court);
}
