#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to listint_t
 * @index: whose node we will return
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
