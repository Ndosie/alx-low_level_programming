#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints the elements in the doubly linked list
 * @h: pointer to the head of a list
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
