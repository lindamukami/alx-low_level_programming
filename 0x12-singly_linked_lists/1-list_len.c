#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len - returns no. of elements in a list
 *@h:list
 *Return:no. of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
