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
	int i;
	int len;

	sum = 0;
	len = (int)strlen(b);
	i = 0;


	if (!b)
		return (0);

	while (i < len)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			sum += power((len - 1) - i);
		i++;
	}

	return (sum);
}
