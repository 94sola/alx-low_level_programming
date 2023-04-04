/*
 * Auth: 94sola
 */

#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: a double pointer
 *
 *Return: if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *fresh;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	fresh = *head;
	*head= fresh->next;
	n = fresh->n;
	free(fresh);
	return (n);
}
