#include "holberton.h"

/**
 * print_square - Prints a square of #s
 * @size: size of square
 */

void print_square(int size);
{
	int i, j;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_puchar('\n');
		}
	}
}
