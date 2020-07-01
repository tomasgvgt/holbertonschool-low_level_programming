#include "holberton.h"

/**
 * _strlen_recursion - Returns the lenght of the string.
 * @s: string
 * Return: Lenght of string;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
