#include "holberton.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Character
 * Return: 1 is upper, 0 else.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
