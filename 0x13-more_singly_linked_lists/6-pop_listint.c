/*
 * Auth: 94sola
 */

#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: If the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *fresh;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	fresh = *head;
	*head = fresh->next;
	n = fresh->n;
	free(fresh);

	return (n);
}
