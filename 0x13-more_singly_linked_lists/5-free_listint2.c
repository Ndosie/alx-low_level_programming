#include "lists.h"

/**
 * free_listint2 - frees the memory of linked list
 * @head: pointer to the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *rem;

	if (head == NULL)
		return;

	while (*head)
	{
		rem = (*head)->next;
		free(*head);
		*head = rem;
	}
	*head = NULL;
}
