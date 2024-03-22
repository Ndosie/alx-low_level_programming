#include <stdlib.h>
#incude "lists.h"

/**
 * insert_dnodeint_at_index - inserts double node at index
 * @h: pointer to the pointer of the head of the doubly linked list
 * @idx: index to insert at
 * @n: number to insert
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *prev;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	while (*head)
	{
		if (i == index)
		{
			new->next = *head;
		}
		i++;
		head =
	}
	return (NULL);
}
