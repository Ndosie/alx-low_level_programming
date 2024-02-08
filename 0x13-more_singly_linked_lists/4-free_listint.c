#include "lists.h"

/**
 * free_listint - frees the memmory taken by the linked list
 * @head: linked list to free memmory
 */
void free_listint(listint_t *head)
{
	listint_t *rem;

	while (head)
	{
		rem = head->next;
		free(head);
		head = org;
	}
}
