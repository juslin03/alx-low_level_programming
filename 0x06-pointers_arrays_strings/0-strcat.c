#include "main.h"

/**
 * _strcat - program that concatenate two strings
 * @dest: destination
 * @src: source
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(dest + count2);
		if (*(dest + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
