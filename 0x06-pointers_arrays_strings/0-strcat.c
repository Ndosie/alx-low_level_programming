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

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
