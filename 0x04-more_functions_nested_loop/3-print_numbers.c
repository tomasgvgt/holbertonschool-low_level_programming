#include "holberton.h"

/**
 * print_numbers - Prints from 1 to 9.
 */

void print_numbers(void)
{
	char num;
	for (num = 48; num >= 57; num++)
		_putchar(num);
	_putchar('\n');
}
