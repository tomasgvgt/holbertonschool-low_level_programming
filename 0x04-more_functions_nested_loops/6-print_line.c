#include "holberton.h"

/**
 * print_line - Prints '_' n numerber of times
 * @n: number of times ti print '_'
 */

void print_line(int n)
{
	char l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
