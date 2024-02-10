#include <math.h>
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
	int counter;

	sum = 0;
	counter = strlen(*b) - 1;


	if (*b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
			sum += pow(2, counter);
		counter--;
		*b++;
	}

	return (sum);
}
