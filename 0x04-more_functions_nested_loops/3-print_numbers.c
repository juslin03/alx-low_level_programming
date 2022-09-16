#include "main.h"

/**
 * print_numbers - Function that prints the numbers
 * from 0 to 9, followed by a newline.
 *
 * Return: the result
 */
int print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar((i % 10) + '0');
		i++;
	}
	_putchar('\n');
}
