#include <stdio.h>
#include "list.h"

/**
 * print_list - Print linked list
 * @h: linked list
 *
 * Return: the number of node
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		nodes++;
		h = h->next;

	}
	return (nodes);
}
