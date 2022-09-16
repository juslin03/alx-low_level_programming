#include "main.h"

/**
 * _isupper - check if param is uppercase
 * @c: input char
 * Return: 1 if true, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
