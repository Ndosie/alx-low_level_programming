#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	int n;
	char a;

	n = 1;
	a = 'a';

	while (n <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		n++;
	}
}
