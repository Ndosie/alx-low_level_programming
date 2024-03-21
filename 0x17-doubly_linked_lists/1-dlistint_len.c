#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a doubly linked list
 * @h: pointer to the head of a linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
