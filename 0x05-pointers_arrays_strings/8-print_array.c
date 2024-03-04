#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements according to a given number
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	if (n <= 0)
		return;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		i++;
	}
}
