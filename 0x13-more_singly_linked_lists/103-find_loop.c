#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *dog;

	tortoise = dog = head;
	while (tortoise && dog && dog->next)
	{
		tortoise = tortoise->next;
		dog = dog->next->next;
		if (tortoise == dog)
		{
			tortoise = head;
			break;
		}
	}
	if (!tortoise || !dog || !dog->next)
		return (NULL);
	while (tortoise != dog)
	{
		tortoise = tortoise->next;
		dog = dog->next;
	}
	return (dog);
}
