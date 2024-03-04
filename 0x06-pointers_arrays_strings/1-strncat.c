#include "main.h"

/**
 * _strncat - appends number of a string to another string
 * @dest: string to append to
 * @src: string to append
 * @n: number of characters
 *
 * Return: final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;

	l = 0;

	while (dest[l])
		l++;

	for (int i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];

	dest[l + i] = '\0';

	return (dest);
}
