#include "lists.h"

/**
 * listint_len - prints the length of list
 * @h: list to get the length
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
