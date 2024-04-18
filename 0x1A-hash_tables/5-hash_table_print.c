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
	int print_comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (print_comma == 1)
				printf(",");

			item = ht->array[i];
			while (item != NULL)
			{
				printf("'%s': '%s'", item->key, item->value);
				item = item->next;
				if (item != NULL)
					printf(",");
			}
			print_comma = 1;
		}
	}
	printf("}\n");
}
