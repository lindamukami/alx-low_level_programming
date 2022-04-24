#include "lists.h"
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *add_node_end - adds a node at the end of a list
 *@head:pointer to head
 *@str:string to duplicate
 *Return:new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	/* allocate node*/
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if(new_node == NULL)
		return (NULL);
	for (len = 0; str[len]; len++);
	
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = NULL;
	/*if linked list is empty, then make the new node as head*/
	if(*head == NULL)
	{
		*head = new_node;
		return;
	}
	/* else traverse till the last node*/
	while(last->next != NULL)
		last = last->next;
	/*change the next of last node*/
	last->next = new_node;
	return;
}
