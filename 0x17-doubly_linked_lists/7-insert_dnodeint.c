#include <stdlib.h>
#include "lists.h"

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
	unsigned int i;
	dlistint_t *new, *org;

	new = NULL;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		i = 1;
		org = *h;

		while (org)
		{
			if (i == idx)
			{
				if (org->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					new->n = n;
					new->next = org->next;
					org->next->prev = new;
					org->next = new;
					new->prev = org;
				}
				break;
			}
			i++;
			org = org->next;
		}
	}
	return (new);
}
