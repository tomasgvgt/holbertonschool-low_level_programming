#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: matrix of integers.
 * @size: side of matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		sum1 += a[i];
	}
	for (i = size - 1; i < size * size; i += size - 1)
	{
		sum2 += a[i];
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
