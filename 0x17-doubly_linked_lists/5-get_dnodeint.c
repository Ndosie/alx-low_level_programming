#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index of doubly linked list
 * @head: pointer to the head of linked list
 * @index: index to get the node
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
