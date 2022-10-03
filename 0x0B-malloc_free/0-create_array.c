#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: specific char
 *
 * Return: pointer of array
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
