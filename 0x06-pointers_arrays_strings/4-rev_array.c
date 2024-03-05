#include "main.h"

/**
 * reverse_array - reverses elements in the array
 * @a: array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int *temp;
	int i;

	temp = malloc(sizeof(a));
	temp = a;
	i = 0;

	while (n >= 0)
	{
		a[i] = temp[n];
		n--;
		i++;
	}
	free(temp);
}
