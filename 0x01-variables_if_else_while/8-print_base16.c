#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always zero
 */
int main(void)
{
	int n;
	char a;

	n = 0;
	a = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (a < 'g')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
