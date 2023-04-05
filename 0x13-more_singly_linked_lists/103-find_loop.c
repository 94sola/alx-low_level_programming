#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
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
	listint_t *dog, *rat;

	if (head == NULL || head->next == NULL)
		return (NULL);

	rat = head->next;
	rat = (head->next)->next;

	while (rat)
	{
		if (dog == rat)
		{
			dog = head;

			while (dog != rat)
			{
				dog = dog->next;
				rat = rat->next;
			}

			return (dog);
		}

		dog = dog->next;
		rat = (rat->next)->next;
	}

	return (NULL);
}
