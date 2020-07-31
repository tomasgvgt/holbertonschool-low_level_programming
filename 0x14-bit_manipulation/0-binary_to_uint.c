#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number into an unsigned int.
 * @b: pointer to string of 0 and 1 chars.
 * Return: Converted number, or 0 if:
 * One or more chars is not 0 or 1, or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, sum, two_power;
	int len, i;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (i = len - 1, num = 0, sum = 0, two_power = 1; i >= 0; i--)
	{
		num = (b[i] - '0') * two_power;
		sum += num;
		two_power *= 2;
	}
	return (sum);
}
