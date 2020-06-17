#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers without using long long
 * Return: 0 for success.
 */

int main(void)
{
	unsigned long a, b, c, a1, a2, b1, b2, c1, c2;
	int i;

	a = 1, b = 2;
	for (i = 1; i < 92; i++)
	{
		if (i == 1)
			printf("%lu, ", a);
		else if (i == 2)
			printf("%lu, ", b);
		else
		{
			c = a + b;
			a = b;
			b = c;
			printf("%lu, ", c);
		}
	}
	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;
	for (; i <= 98; i++)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;
		c1 = c1 + c2 / 1000000000;
		c2 = c2 % 1000000000;
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		printf("%lu%lu", c1, c2);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
