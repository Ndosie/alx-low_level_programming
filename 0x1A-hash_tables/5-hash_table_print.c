#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			printf("'%s' : '%s'", item->key, item->value);
			item = item->next;
			if (item != NULL || i != ht->size - 1)
				printf(",");
		}
	}
	printf("}\n");
}
