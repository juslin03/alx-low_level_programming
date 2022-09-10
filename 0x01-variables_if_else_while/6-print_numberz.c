#include <stdio.h>

/**
 * main - Prints all single digit number of base 10 starting from 0.
 * Using the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + "0");
		n++;
	}

	putchar("\n");


	return (0);
}
