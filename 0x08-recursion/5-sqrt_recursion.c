#include "main.h"
#include <stdio.h>

/**
 * power_calcul - returns the natural square root of a number
 * @n: number
 * @i: iterator
 *
 * Return: natural square root
 */
int power_calcul(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i % (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + power_calcul(n, i + 1));
}


/**
 * _sqrt_recursion - print the square root of a given number
 * @n: given number
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (power_calcul(n, 2));
}
