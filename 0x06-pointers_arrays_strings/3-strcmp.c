#include "main.h"

/**
 * _strcmp - compares the two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0, negative number and positive number
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int r;

	i = 0;
	r = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		i++;
	}

	if (s2[i])
		r = s2[i];
	return (r);
}
