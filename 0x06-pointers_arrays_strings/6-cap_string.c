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
	s[i] = s[i] - 32;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (spec[j] == s[i - 1])
				{
					s[i] = s[i] - 32;
					break;
				}

			}
		}
		i++;
	}
	return (s);
}
