#include <stdio.h>

/**
 * main - this program  prints all possible combinations of two-digit
 * numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2;

	for (n1 = '0'; n1 <= '8'; n1++)
	{
		for (n2 = n1 + 1; n2 <= '9'; 2++)
		{
			if (n1 != n2)
			{
				putchar(n1);
				putchar((n2);
				if (n1 != '8' || n2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
