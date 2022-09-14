#include "main.h"

/**
 * _islower - print if character is lower
 *
 * @c: Character to be cheked
 * Return: 1 if it is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
