#include "hash_tables.h"

/**
 * free_recursively - frees linked node from a hash table
 * @item: linked node
 *
 */
void free_recursively(hash_node_t *item)
{
	if (item->next != NULL)
		free_recursively(item->next);

	free(item->key);
	free(item->value);
	free(item);
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht
	unsigned long int i;
	hash_node_t *item;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			item = ht->array[i];
			if (item->next != NULL)
			{
				free_recursively(item->next);
			}
			free(item->key);
			free(item->value);
			free(item);
		}
	}
	free(h->array);
	free(h);

}
