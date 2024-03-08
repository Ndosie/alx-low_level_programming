#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sums array diagonally and print its sums
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;

	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				s1 += a[i * (size + 1)];
			if ((i + j) == (size - 1))
				s2 += a[(size - 1) * (size - j)];
		}
	}

	printf("%d, %d\n", s1, s2);
}
