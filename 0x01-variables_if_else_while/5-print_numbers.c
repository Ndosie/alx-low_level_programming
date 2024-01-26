#include <stdio.h>

/**
 * main - Prints numbers
 *
 * Return: Zero
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
