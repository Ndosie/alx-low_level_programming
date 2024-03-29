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
	unsigned int i = 0;

	if (*needle == '\0')
		return (haystack);

	while (needle[i])
		i++;
	l = i;

	while (1)
	{
		if (*haystack == needle[0])
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (*haystack == needle[i])
				{
					haystack++;
				}
				else
					break;
			}

			if (l == i)
				return (haystack - i);
		}

		if (*haystack == '\0')
			return ('\0');
		haystack++;
	}

}
