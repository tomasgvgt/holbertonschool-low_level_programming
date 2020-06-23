#include "holberton.h"

/**
 * puts_half - prints half of a string followed by a newline,
 * @str: string
 */

void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
		;
	for (i = (len - 1) / 2 + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
