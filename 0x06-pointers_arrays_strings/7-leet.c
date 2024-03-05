#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char b[5] = {'A', 'E', 'O', 'T', 'L'};
	int n[5] = {4, 3, 0, 7, 1};
	int i = 0;
	int j;

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (a[j] == s[i] || b[j] == s[i])
				s[i] = n[j];
		}
		i++;
	}
}
