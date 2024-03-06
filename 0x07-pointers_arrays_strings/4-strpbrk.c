#include "main.h"

/**
 * _strpbrk  - searches the string and return a pointer to the 1st byte
 * @s: string
 * @accept: bytes to search
 *
 * Return: pointer to the first occurance or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}

	if (*s == '\0')
		return ('\0');
}
