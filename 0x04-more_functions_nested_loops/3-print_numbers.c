#include "main.h"

/**
 * print_numbers - function that prints the numbers
 * from 0 to 9, followed by a newline.
 *
 * Return: the result
 */
int print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
