#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *first;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
	*head = ptr;
		return (ptr);
	}
	first = *head;
	while (first->next != NULL)
	{
		first = first->next;
	}
	first->next = ptr;
	return (ptr);
}
/*
 * File: 3-add_nodeint_end.c
 * Author: Ademoroti olusola (9sola)
 */
