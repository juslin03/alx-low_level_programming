#include "main.h"

/**
 * print_alphabet x10 - print x10 alphabet in lowecase followed a new line
 */
void print_alphabet(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
		i++;
	}
}
