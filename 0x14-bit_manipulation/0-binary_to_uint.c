#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

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


	if (b == '\0')
		return (0);

	while (i < len)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			sum += 1 << ((len - 1) - i);
		i++;
	}

	return (sum);
}
