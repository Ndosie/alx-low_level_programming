#include <string.h>
#include "main.h"

/**
 * puts_half - prints the half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int l;
	int n;

	l = (int)strlen(str);

	if (l % 2 == 0)
		i = l / 2;
	else
	{
		n = (l - 1) / 2;
		i = l - n;
	}


	while (i < l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
