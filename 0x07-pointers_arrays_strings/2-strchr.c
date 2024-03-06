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
	int i = 0;
	char *p = '\0';

	while (s[i])
	{
		if (s[i] == c)
		{
			p = (s + i);
			break;
		}
		i++;
	}

	return (p);
}
