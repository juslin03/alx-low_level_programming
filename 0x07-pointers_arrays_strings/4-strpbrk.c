#include "main.h"

/**
 * _strpbrk - search a string of any of set bytes
 * @s: first string
 * @accept: second tring
 *
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}

	return ('\0');
}
