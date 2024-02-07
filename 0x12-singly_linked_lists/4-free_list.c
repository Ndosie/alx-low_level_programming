#include <stdlib.h>
#include 'lists.h'

/**
 * free_list - frees the memory of linked list
 * @head: linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *org;

	while (head)
	{
		org = head->next;
		free(head->str);
		free(head);
		head = org;
	}
}
