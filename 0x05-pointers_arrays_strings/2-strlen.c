#include "holberton.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: pointer to string
 * Return: Lenght of string, excluding NULL character
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
