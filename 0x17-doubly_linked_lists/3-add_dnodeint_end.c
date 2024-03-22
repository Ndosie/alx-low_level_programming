#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds the double node at the end of doubly linked list
 * @head: pointer to pointer of the head of doubly linked list
 * @n: number of node
 *
 * Return: address of a new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *org;

	org = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (org == NULL)
		*head = new;
	else
	{
		while (org->next)
			org = org->next;
		org-> = new;
	}

	new->prev = org;

	return (new);
}
