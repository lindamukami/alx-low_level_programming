#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node and returns its data
 * @head: pointer to listint_t
 *
 * Return: head dsts
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data = 0;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	tmp = *head;
	(*head) = (*head)->next;
	free(tmp);
	return (data);
}
