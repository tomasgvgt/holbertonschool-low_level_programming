#include "holberton.h"

/**
 * infinite_add - adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @r: fuffer to store result
 * @size_r: size of buffer r
 * Return: pointer to buffer r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, digit1, digit2, rem, result;
	char temp;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (size_r < i + 2 || size_r < j + 2)
		return (0);
	i--, j--, k = 0, rem = 0;

	while (i >= 0 || j >= 0)
	{
		digit1 = 0, digit2 = 0;
		if (i >= 0)
			digit1 = n1[i] - '0', i--;
		if (j >= 0)
			digit2 = n2[j] - '0', j--;
		result = digit1 + digit2 + rem;
		if (result <= 9)
			r[k] = result + '0', rem = 0;
		else
			r[k] = (result - 10) + '0', rem = 1;
		k++;
	}
	if (rem == 1)
		r[k] = 1 + '0', k++;
	k--;
	for (l = k, m = 0; m < l / 2; m++, k--)
	{
		temp = r[m];
		r[m] = r[k];
		r[k] = temp;
	}
	l++;
	r[l] = '\0';
	return (r);
}
