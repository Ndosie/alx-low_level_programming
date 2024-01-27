#include <stdio.h>

/**
 * main - Prints numbers with putchar function
 *
 * Return: Zero
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
