#include "lists.h"

/**
 * add_nodeint_end - add node at the end of linked list
 * @head: the pointer to the list to add node to
 * @n: integer to add to the list
 *
 * Return: address of a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *org;

	org = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (org->next)
		org = org->next;

	org->next = new;

	return (new);
}
