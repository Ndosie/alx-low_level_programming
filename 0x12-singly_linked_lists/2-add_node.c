#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node at the beginning of a linked list
 * @head: pointer to the linked list
 * @str: pointer to string of characters
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!new)
		retur (NULL);

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);

	(*head) = new;

	return (*head);
}
