#include "main.h"

/**
 * power - raises 2 to power
 * @p: power to raise
 *
 * Return: power
 */

unsigned int power(int p)
{
	unsigned int sum;

	sum = 1;

	while (p > 0)
	{
		sum *= 2;
		p--;
	}
	return (sum);
}

/**
 * binary_to_uint - converts binary number to integer
 * @b: number to convert
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int counter;
	int len;

	sum = 0;
	len = strlen(*b);
	counter = len - 1;


	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
			sum += power(counter);
		counter--;
		++*b;
	}

	return (sum);
}
