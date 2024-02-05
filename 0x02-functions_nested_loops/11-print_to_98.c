#include "main.h"

/**
 * print_to_98 - receives and print it to 98
 * @n: number to start from
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else
		{
			_putchar(i + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
