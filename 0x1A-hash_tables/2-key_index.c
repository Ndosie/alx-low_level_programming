#include "hash_tables.h"

/**
 * key_index - generate and returns the index value of a key
 * @key: key to generate index
 * @size: size of array of hash table
 *
 * Return: index value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
