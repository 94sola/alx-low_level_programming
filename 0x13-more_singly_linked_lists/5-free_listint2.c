#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a listint_t list.
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
/*
 * Auth: 94sola
 */
