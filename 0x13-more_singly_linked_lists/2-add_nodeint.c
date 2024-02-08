#include "lists.h"

/**
 * add_nodeint - add node at the beginning of the list
 * @head: a pointer to a list to add node to
 * @n: integer to add to the list
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);

	(*head) = new;

	return (*head);
}
