#include <ctype.h>
#include "main.h"

/**
 * _isdigit - test if the given value is digit
 * @c: value to test
 *
 * Return: Zero or One
 */
int _isdigit(int c)
{
	int i;

	i = isdigit(c);

	if (i)
		return (1);
	else
		return (0);
}
