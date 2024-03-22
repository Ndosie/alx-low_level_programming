#include "lists.h"

/**
 * sum_dlistint - sums all the nodes of the doubly linked list
 * @head: pointer to the head of the linked list
 *
 * Return: sum of all the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
