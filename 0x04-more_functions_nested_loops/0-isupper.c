#include "holberton.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Character
 * Return: 1 is upper, 0 else.
 */

int _isupper(int c)
{
	if (c >= 101 && c <= 132)
		return (1);
	else
		return (0);
}
