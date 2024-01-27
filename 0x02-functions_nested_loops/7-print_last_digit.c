#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: number to get the last digit
 *
 * Return: integer the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = -n;
	else
		a = n;

	_putchar(a + '0');
	return (a % 10);
}
