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
	strcpy(dest, src);

	return (dest);
}
