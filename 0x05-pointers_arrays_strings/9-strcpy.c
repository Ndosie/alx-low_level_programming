#include <string.h>
#include "main.h"

/**
 * _strcpy - copies string from source to destination
 * @dest: pointer to buffer
 * @src: string to copy
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
