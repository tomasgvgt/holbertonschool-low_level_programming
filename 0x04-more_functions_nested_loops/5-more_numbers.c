#include "holberton.h"

/**
 * more_numbers - Prints from 1 to 14, ten times.
 */

void more_numbers(void);
{
	char num, i;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
