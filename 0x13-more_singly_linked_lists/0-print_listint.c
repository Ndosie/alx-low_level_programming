#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		printf("%u\n", h->n);
		nodes++;	
	}

	return (nodes);
}
