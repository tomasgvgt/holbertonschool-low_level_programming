#include <stdio.h>

/**
 * main - Prints the sum of even valued fibonacci terms that are <= 4000000.
 * Return: 0 for suceess
 */

int main(void)
{
	long int fibo, var, i, sum = 0;

	for (i = 1, fibo = 0; fibo <= 4000000; i++)
	{
		if (i == 1)
			var = i, fibo = i;
		else if (i == 2)
			fibo = i;
		else
		{
			fibo += var;
			var = fibo - var;
		}
		if (fibo % 2 == 0)
			sum += fibo;
	}
	printf("%ld\n", sum);
	return (0);
}
