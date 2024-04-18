#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			item = ht->array[i];
			while (item != NULL)
			{
				temp = item->next;
				free(item->key);
				free(item->value);
				free(item);
				item = temp;
			}
		}
	}
	free(ht->array);
	free(ht);

}
