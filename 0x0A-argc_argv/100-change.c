#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minumum number of coins needed to give change.
 * @argc: Argument Counter.
 * @argv: Argument Vector.
 * Return: 0 Success, 1 Error.
 */

int main(int argc, char *argv[])
{
	int i, cents, coins;
	int coin_value[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	for (i = 0; i < 5; i++)
	{
		for (; cents >= coin_value[i]; coins++)
			cents -= coin_value[i];
	}
	printf("%d\n", coins);
	return (0);
}
