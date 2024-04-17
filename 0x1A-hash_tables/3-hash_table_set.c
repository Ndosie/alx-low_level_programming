#include "hash_tables.h"

/**
 * hash_table_set - adds or updates value to a hash table
 * @ht: hash table to add to
 * @key: key of a value
 * @value: value to add
 *
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *current;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		if (strcmp(current->key, key) == 0)
			ht->array[index] = node;
		else
		{
			node->next = current;
			ht->array[index] = node;
		}
	}

	return (1);
}
