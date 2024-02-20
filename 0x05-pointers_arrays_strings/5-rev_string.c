#include <string.h>
#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char *o;
	int i;
	int j;

	o = s;
	strcpy(o, s);
	i = ((int)strlen(s)) - 1;
	j = i;

	while (i >= 0)
	{
		s[j - i] = o[i];
		i--;
	}
}
