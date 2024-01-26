#include <stdio.h>

/**
 * main - Print alphabets both in lower and upper case
 *
 * Return: Zero
 */
int main(void)
{
	char capital;
	char lower;

	lower = 'a';
	capital = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}

	putchar('$\n');
	return (0);
}
