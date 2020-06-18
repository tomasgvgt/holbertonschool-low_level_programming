#include <stdio.h>

/**
 * main - FizzBuzz program with multiples of 3 and 5.
 * Return: 0 for success.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 != 0)
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
