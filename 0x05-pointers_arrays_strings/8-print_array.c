#include "main.h"

/**
 * print_array - function that prints n elements of an
 * array, followed by a new line.
 * @a: input arr,
 * @n: number of elements
 *
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
