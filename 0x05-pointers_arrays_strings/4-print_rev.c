#include "holberton.h"

/**
 * print_rev - prints a string in reverse by a newline
 * @s: string
 */

void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	while (i >= 0)
		_putchar(s[i--]);
	_putchar('\n');
}
