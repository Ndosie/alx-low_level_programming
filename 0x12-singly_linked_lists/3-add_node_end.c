#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node at the end of linked list
 * @head: linked list to add to
 * @str: string to add
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *org;

	org = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
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
