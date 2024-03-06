#include "main.h"

/**
 * _strchr - returns the pointer to 1st occurance of a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer the first occurance of a character
 */
char *_strchr(char *s, char c)
{

	while (1)
	{
		if (*s == c)
			return (s);

		if (*s == '\0')
			return ('\0');
		s++;
	}
}
