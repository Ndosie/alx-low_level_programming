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

	i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = s[i - 1];
			if ((j >= 9 && j <= 47) || (j >= 58 && j <= 126))
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
