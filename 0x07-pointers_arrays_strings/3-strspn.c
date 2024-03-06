#include "main.h"

/**
 * _strspn - return number bytes of initial segment inside another string
 * @s: string which contains the segment
 * @accept: segment
 *
 * Return: number of bytes found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	while (*accept)
	{
		while (*s != 32)
		{
			if (*accept == *s)
				l++;
			s++;
		}
		accept++;
	}
	return (l);
}
