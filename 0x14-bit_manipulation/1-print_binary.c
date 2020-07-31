#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: number.
 */

void print_binary(unsigned long int n)
{
	int shift_times = 0;
	unsigned long int num, n_shifted, prev_n_shifted;
	char bit;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	num = n;
	while (num > 0)
	{
		num = num >> 1;
		shift_times++;
	}
	shift_times--;

	while (shift_times >= 0)
	{
		n_shifted = n >> shift_times;
		prev_n_shifted = n >> (shift_times + 1);
		bit = (n_shifted ^ (prev_n_shifted << 1));
		_putchar(bit + '0');
		shift_times--;
	}
}
