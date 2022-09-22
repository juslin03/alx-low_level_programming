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
	int count1 = 0, count2 = 0;

	while (*(dest + count1) != '\0')
	{
		count1++;
	}

	while (count2 >= 0)
	{
		*(dest + count1) = *(dest + count2);
		if (*(dest + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
