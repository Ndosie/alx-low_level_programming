#include "main.h"

/**
 * print_int - prints integer with putchar function
 * @n: integer to print
 */
void print_int(int n)
{
	if (n / 10)
		print_int(n / 10);

	_putchar(n % 10 + '0');
}


/**
 * print_diagsums - sums array diagonally and print its sums
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;

	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				s1 += a[i * (size + 1)];
			if ((i + j) == (size - 1))
				s2 += a[(size - 1) * (size - j)];
		}
	}

	print_int(s1);
	_putchar(',');
	_putchar(' ');
	print_int(s2);
	_putchar('\n');
}
