#include "holberton.h"

/**
 * string_toupper - compares two strings, man strcmp.
 * @s: string.
 * Return: string in uppercase.
 */

char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (s);
}
