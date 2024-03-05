#include "main.h"

/**
 * cap_string - capitalizes each word of a string
 * @s: string to capitilize
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char spec[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	i = 0;

	while (s[i])
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (spec[j] == s[i])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
