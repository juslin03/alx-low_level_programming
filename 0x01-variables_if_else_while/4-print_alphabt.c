#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * Print all letters excepts q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'a' && letter != 'q')
			putchar(letter);

	putchar('\n');

	return (0);
}
