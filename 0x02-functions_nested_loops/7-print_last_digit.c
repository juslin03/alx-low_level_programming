#include "main.h"

/**
 * print_last_digit - print the last digit of number
 * @number: number
 *
 * Return: the value
 */
int print_last_digit(int number)
{
	int l_digit = number % 10;

	if (l_digit < 0)
		l_digit *= -1;
	_putchar(la_digit + '0');

	return (l_digit);
}
