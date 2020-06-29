#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: matrix of integers.
 * @size: side of matrix.
 */

void print_diagsums(int *a, int size)
{
	int len = size * size, sum1 = 0, sum2 = 0, i;

	for (i = 0; i < len; i++)
	{
		if (i == 0 || i % (size + 1) == 0)
			sum1 += a[i];
	}

	for (i = 0; i <= len - size; i++)
	{
		if (i % (size - 1) == 0)
			sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
