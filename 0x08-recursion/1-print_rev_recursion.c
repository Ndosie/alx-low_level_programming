#include "main.h"

/**
 * _print_rev_recursion - print string in reverse recursively
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else
		_putchar('\n');
	if (*s == '\0')
		return;
	_putchar(*s);
}
