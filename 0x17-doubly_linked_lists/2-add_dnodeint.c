#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds double node at the head of a doubly linked lists
 * @head: pointer to pointer of the head of linked list
 * @n: number of a node
 *
 * Return: address of a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
