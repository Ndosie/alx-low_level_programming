#include "main.h"
/**
 * _puts_recursion - prints string recursively
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');

}
