#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to list_t
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
