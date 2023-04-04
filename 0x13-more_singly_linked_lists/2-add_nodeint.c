#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: NULL if it failed, otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *old;

	old = malloc(sizeof(listint_t));
	if (old == NULL)
		return (NULL);

	old->n = n;
	old->next = *head;

	*head = old;

	return (old);
}
/*
 * File: 2-add_nodeint.c
 * Author: Ademoroti olusola(94sola)
 */
