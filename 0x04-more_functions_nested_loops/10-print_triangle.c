#include "main.h"

/**
 * print_triangle - prints triangle according to size
 * @size: size to print
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('*');
		_putchar('\n');
	}
}
