#include "main.h"

/**
 * print_line - prints _ according to the number given
 * @n: times to print
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}

}
