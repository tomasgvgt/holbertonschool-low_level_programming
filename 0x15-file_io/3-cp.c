#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Copies the content of a file to anotherone
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 succes.
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, rd, wr, cl1, cl2;
	char buf[1024];

	if (argc != 3)
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29), exit(97);
	if (!argv[1])
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Can't write to %s", argv[2]), exit(99);
	do
	{
		rd = read(fd1, buf, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		wr = write(fd2, buf, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Can't write to %s", argv[2]), exit(99);
	} while (rd == 1024);
	cl1 = close(fd1);
	if (cl1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	cl2 = close(fd2);
	if (cl2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (1);
}
