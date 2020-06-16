#include "holberton.h"

/**
 * print_last_digit - Prints last digit of an int
 * @i: int
 * Return: Laste digtit of i
 */

int print_last_digit(int i)
{
	int last = i % 10;

	_putchar(last + '0');
	return (last);
}
