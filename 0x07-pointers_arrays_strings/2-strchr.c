#include "holberton.h"

/**
 * _strchr - Locates a character in a satring. man strchr
 * @s: String.
 * @c: Char
 * Return: Pointer to the first occurrence of the character in the string.
 * Null if character not found.
 */

char *_strchr(char *s, char c)
{
	char *p;

	for (p = s; *p != '\0'; p++)
	{
		if (*p == c)
			return (p);
	}
	if (*p == c)
		return (p);
	return ('\0');
}
