#include "holberton.h"

void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	if (n / 10 > 0)
		print_number(n / 10);
	print_number(n % 10 + '0');
}