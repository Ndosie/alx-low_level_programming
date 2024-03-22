#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node from doubly linked list at index
 * @head: pointer to the pointer of the first node fo the linked list
 * @index: index to delete at
 *
 * Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *org;

	org = *head;

	if (org == NULL)
		return (-1);
	if (index == 0)
	{
		org = org->next;
		org->next->prev = NULL;
		return (1);
	}
	else
	{
		i = 1;
		while (org)
		{
			if (index == i)
			{
				if (org->next == NULL)
				{
					org->prev->next = NULL;
					org->prev = NULL;
				}
				else
				{
					org->next = org->next->next;
					org->next->next->prev = org;
				}
				return (1);
			}
			i++;
			org = org->next;
		}
	}
	return (-1);
}
