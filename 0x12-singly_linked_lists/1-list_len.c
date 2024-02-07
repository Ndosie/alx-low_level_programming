#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the length of linked list
 * @h: a pointer to linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
