#include <string.h>
#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char o[1024];
	int i;
	int j;

	i = ((int)strlen(s)) - 1;
	j = 0;

	while (j <= i)
	{
		o[j] = s[j];
		j++;
	}

	j = i;
	while (i >= 0)
	{
		s[j - i] = o[i];
		i--;
	}
}
