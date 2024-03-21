#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees the doubly linked list
 * @head: doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t org;

	while (head)
	{
		org = head->next;
		free(head);
		head = org;
	}
}
