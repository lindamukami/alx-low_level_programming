#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *insert_nodeint_at_index - function that inserts a new node at a position
 * @head: point to listint_t
 * @idx: index of list to add new node
 * @n: new node data
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));

	ptr2->n = n;
	ptr2->next = NULL;

	idx--;
	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
