#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: nth time table
 */

void print_times_table(int n)
{
	int i, j, num;

	if (n >= 0 || n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				num = i * j;
				if (num < 10)
					_putchar(num + '0');
				else if (num >= 10 && num < 100)
				{
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}
				else
				{
					_putchar(num / 100 + '0');
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if ((num + i) < 10)
						_putchar(' '), _putchar(' ');
					else if ((num + i) >= 10 && (num + i) < 100)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
