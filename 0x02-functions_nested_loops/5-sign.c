#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: number to check
 *
 * Return: 1 if number is greater than 0, 0 if its 0 and -1 if its less than 0
 */
int print_sign(int n)
{
	if (n > 0)
		return ('+');
	else if (n < 0)
		return ('-');
	else
		return (0);
}
