#include "main.h"

/**
 * string_toupper - changes characters of a string to upper case
 * @s: string to change
 *
 * Return: changed string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
