#include "main.h"

/**
 * print_binary - changes decimal number to binary
 * @n: decimal number to change
 */
void print_binary(unsigned long int n)
{
	unsigned long int t;
	int s;

	t = n;
	s = 0;

	while (t > 1)
	{
		t >>= 1;
		s++;
	}

	while (s >= 0)
	{
		t = n;
		_putchar(((t >> s) & 1) + '0');
		s--;
	}
}
