#include "main.h"

/**
 * _print_rev_recursion - print string in reverse recursively
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\n')
	{
		s++;
		_print_rev_recursion(s);
	}
	else
		_putchar('\n');
	_putchar(*s);
}
