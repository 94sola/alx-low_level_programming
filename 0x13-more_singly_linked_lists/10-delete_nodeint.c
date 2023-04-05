#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at a given index of a listint_t list.
 * @head: A pointer to the address of the head
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *temp = *head;
	unsigned int i;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	tmp = temp->next;
	temp->next = tmp->next;
	free(tmp);
	return (1);
}
