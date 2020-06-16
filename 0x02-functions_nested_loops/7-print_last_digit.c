#include "holberton.h"

/**
 * print_last_digit - Prints last digit of an int
 * @i: int
 * Return: Last digit of i
 */

int print_last_digit(int i)
{
	i = i % 10;

	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
