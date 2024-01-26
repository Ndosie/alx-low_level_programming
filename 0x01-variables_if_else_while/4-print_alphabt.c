#include <stdio.h>

/**
 * main - Print alphabets except e and q
 *
 * Return: Zero
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e')
		{
			continue;
		}
		else if (alphabet == 'q')
		{
			continue;
		}
		else
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');
	return (0);
}
