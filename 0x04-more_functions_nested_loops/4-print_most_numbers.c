#include "holberton.h"

/**
 * print_most_numbers - Prints from 1 to 9. Excluding 2 and 4.
 */

void print_most_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
	_putchar('\n');
}
