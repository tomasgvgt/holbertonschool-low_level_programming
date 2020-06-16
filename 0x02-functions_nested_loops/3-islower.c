#include "holberton.h"

/**
 * _islower - Detects if a character is lower or not
 * @c: Character to detect.
 * Return: 1 if true, 0 if false.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
