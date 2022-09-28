#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value x
 * raised to the power of y.
 * @x: value to be raised
 * @y: the value of the power
 *
 * Return: the raised
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (_pow_recursion(x, y));
}
