#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *rat;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (rat)
	{
		if (tortoise == rat)
		{
			tortoise = head;

			while (tortoise != rat)
			{
				tortoise = tortoise->next;
			 rat = rat->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
	rat = (rat->next)->next;
	}

	return (NULL);
}
