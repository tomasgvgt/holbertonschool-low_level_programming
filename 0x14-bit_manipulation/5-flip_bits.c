#include "holberton.h"

/**
 * flip_bits - returns number of bits needed to flip, to get from
 * one number to another.
 * @n: first number.
 * @m: second number.
 * Return: number of bits needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift_times = 0, count = 0;
	unsigned long int n1, m1, n_shifted, prev_n_shifted;
	unsigned long int m_shifted, prev_m_shifted;
	char bit_n, bit_m;

	for (n1 = n, m1 = m; n1 > 0 || m1 > 0; shift_times++)
	{
		n1 >>= 1, m1 >>= 1;
	}
	shift_times--;

	while (shift_times >= 0)
	{
		n_shifted = n >> shift_times;
		m_shifted = m >> shift_times;
		prev_n_shifted = n >> (shift_times + 1);
		prev_m_shifted = m >> (shift_times + 1);
		bit_n = (n_shifted ^ (prev_n_shifted << 1));
		bit_m = (m_shifted ^ (prev_m_shifted << 1));
		if (bit_n != bit_m)
			count++;
		shift_times--;
	}
	return (count);
}
