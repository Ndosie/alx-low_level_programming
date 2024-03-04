#include "main.h"

/**
 * _strncpy - copies number of characters of a string to another string
 * @dest: string to copy to
 * @src: string to copy
 * @n: number of characters
 *
 * Return: final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
