#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - Reverses a listint_t
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	ahead = NULL;
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = ahead;
		ahead = *head;
		*head = next;
	}
	*head = ahead;
	return (*head);
}
