#include "main.h"

/**
 * times_table - Prints table of 9
 *
 * Return: Void
 */
void times_table(void)
{
	int r;
	int c;
	int m;

	r = 0;

	while (r <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			m = r * c;
			if (m > 9)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				if (c != 0)
					_putchar(' ');
				_putchar(m + '0');
			}
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
		_putchar('\n');
		r++;
	}
}
