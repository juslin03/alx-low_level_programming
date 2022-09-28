#include "main.h"
#include <stdio.h>

/**
 * factorial - prints the factorial of a given
 * number;
 * @n: given number
 *
 * Return: factorial(n)
 */
int factorial(int n)
{
	if (n <= 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
