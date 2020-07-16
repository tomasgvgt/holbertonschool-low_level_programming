#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Performs simple operations.
 * @argc: argument counter.
 * @argv: Argument vector.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*if (argv[2] != "+" && argv[2] != "-" && argv[2] != "*" && argv[2] != "/" && argv[2] != "%")
	if (get_op_func() == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	*/

	a = atoi(argv[1]), b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
