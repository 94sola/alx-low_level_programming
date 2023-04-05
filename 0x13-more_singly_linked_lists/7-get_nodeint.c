#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: index is the index of the node to locate
 *
 * Return: If the node does not exist - NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
		if (head == NULL)
		return (NULL);

	
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
