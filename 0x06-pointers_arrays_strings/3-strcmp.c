#include "holberton.h"

/**
 * _strcmp - compares two strings, man strcmp.
 * @s1: string 1.
 * @s2: string 2.
 * Return: s1 - s2.
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
