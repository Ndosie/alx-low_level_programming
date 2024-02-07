#include "main.h"

/**
 * print_int - prints integer with putchar function
 * @n: integer to print
 *
 * Return: nothing
 */
void print_int(int n)
{
	if (n / 10)
		print_int(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * print_space - prints space and comma
 *
 * Return: nothing
 */
void print_space(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 * print_to_98 - receives and print it to 98
 * @n: number to start from
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');
				i = -n;
			}
			else
			{
				i = n;
			}

			if (i > 9)
				print_int(i);
			else
				_putchar(i + '0');
			if (n != 98)
				print_space();
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			print_int(n);
			if (n != 98)
				print_space();

		}
	}
	_putchar('\n');
}
