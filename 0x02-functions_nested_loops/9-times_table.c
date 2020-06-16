#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;
			if (num < 10)
				_putchar(num + '0');
			else
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((num + i) < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
