#include "main.h"

/**
 * _strstr - searches a substring in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: the pointer thr 1st letter of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int l = 0;
	int i;
	unsigned int j = 0;

	if (*needle == "")
		return haystack;

	while (*needle)
	{
		l++;
		needle++;
	}

	while (1)
	{
		if (*haystack == needle[0])
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (*haystack == needle[i])
				{
					j++;
					haystack++;
				}
			}
			if (l == j)
				return (haystack - j);
		}

		if (*haystack == '\0')
			return ('\0');
		haystack++;
	}

}
