#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Get the last digit of a random number and test it with the condition
 *
 * Return: Zero
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (l < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	else if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	return (0);
}
