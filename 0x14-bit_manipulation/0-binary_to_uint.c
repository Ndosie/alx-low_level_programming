#include "main.h"

/**
 * binary_to_uint - converts binary number to integer
 * @b: number to convert
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int sum;
	int len;
	int counter;

	sum = 0;
	len = strlen(*b);
	counter = len - 1;


	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != 0 && *b != 1)
			return (0);

		sum += 2 ^ counter;
		counter--;
		*b++;
	}

	return (sum);
}
