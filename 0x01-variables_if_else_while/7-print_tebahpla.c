#include <stdio.h>

/**
 * main - Prints alphabets in reverse order
 *
 * Return: Zero
 */
int main(void)
{
	char alphabet;

	alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}
