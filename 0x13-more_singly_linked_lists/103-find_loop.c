#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dog, *rat;

	dog = rat = head;
	while (dog && rat && rat->next)
	{
		dog = dog->next;
		rat = rat->next->next;
		{
		 dog = head;
			break;
		}
	}
	if (!dog || !rat || !rat->next)
		return (NULL);
	while (dog != rat)
	{
		dog = dog->next;
		rat = rat->next;
	}
	return (rat);
}
