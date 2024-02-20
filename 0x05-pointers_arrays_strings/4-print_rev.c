#include "main.h"

/**
 * print_rev - prints string in reverse form
 * @s: string to print
 */
void print_rev(char *s)
{
	int i;

	i = ((int)strlen(s)) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
