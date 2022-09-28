#include "main.h"
#include <stdio.h>

/**
 * is_prime - checker
 * @num: number
 * @i: iterator
 *
 * Return: 1 if num is a prime number. 0 if num is not a prime number.
 */
int is_prime(int num, int i)
{
	if ((num % i) == 0)
	{
		if (num == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(num, i + 1));
}

/**
 * is_prime_number -  returns 1 if the input integer is a prime number,
 * otherwise return 0;
 * @n: input integer
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (1);
	return (is_prim(n, 2));
}
