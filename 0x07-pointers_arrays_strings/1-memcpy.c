#include "main.h"

/**
 * _memcpy - copies number of bytes from source to destination
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 *
 * Return: pointer to destination with copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
