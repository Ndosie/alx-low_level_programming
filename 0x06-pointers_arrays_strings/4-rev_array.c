#include "main.h"

/**
 * reverse_array - reverses elements in the array
 * @a: array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;

	i = 0;
	j = n - 1;

	while (n / 2)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
