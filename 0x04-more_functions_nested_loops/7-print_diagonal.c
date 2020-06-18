#include "holberton.h"

/**
 * print_diagonal - Prints '\' n numerber of times forming a diagonal
 * @n: number of times ti print '\'
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j > 0)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
