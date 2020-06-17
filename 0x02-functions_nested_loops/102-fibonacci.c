#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers.
 * Return: 0 for suceess
 */

int main(void)
{
	long int fibo, var, i;

	for (i = 1; i <= 50; i++)
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
		printf("%ld", fibo);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
