#include "main.h"

/**
 * _abs - computes the absolute of an integer
 * @n: an integer to compute its absolute
 *
 * Return: integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
