#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints all the arguments passed to the program,
 * including the name of the program.
 * @argc: Arguent count.
 * @argv: Array of arguments.
 * * Return: 0 for success;
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
