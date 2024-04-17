#include "hash_tables.h"

/**
 * hash_table_get - retrives a value associated with a key
 * @ht: hash table to retrieve a value
 * @key: key to get its value
 *
 * Return: value or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);
}
