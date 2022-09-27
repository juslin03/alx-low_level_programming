#include "main.h"

/**
 * _strchr - pointer to the first occurence to the character
 * @s: string
 * @c: character
 *
 * Return: a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
