#include <stdio.h>

/**
 * main - this program prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char letter;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
