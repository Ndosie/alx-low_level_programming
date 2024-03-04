#include "main.h"

/**
 * _strcat - appends string to another string
 * @dest: string to append to
 * @src: string to append
 *
 * Return: final string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int l;

	i = 0;
	l = 0;

	while (dest[l])
		l++;

	while (src[i])
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';

	return (dest);
}
