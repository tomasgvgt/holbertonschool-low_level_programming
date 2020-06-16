#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase x 10
 */

void print_alphabet_x10(void)
{
	int a, i = 0;

	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		i++;
	}
}
