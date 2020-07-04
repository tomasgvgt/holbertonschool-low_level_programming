#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Prints the multiplication of two numbers.
 * @argc: Arguent count.
 * @argv: Array of arguments.
 * Return: 0 for success, 1 for error.
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
