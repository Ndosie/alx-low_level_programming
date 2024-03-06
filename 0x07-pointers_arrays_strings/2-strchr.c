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
	char *p = '\0';

	while (1)
	{
		if (*s == c)
			return (s);
		else
			return (p)
		s++;
	}
}
