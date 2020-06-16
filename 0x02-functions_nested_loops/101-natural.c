#include <stdio.h>

/**
 * main - Prints the sum of al natural numbers that are multiple
 * of 3 or 5, below 1024.
 * Return: 0 for success
 */

int main(void)
{
	int n = 6, sum = 8;

	while (n < 1024)
	{
		if (n % 3 == 0)
			sum += n;
		else if (n % 5 == 0)
			sum += n;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
