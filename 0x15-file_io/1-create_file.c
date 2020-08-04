#include "holberton.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file and writes text in it
 * @filename: file name
 * @text_content: string to write in file
 * Return: 1 success. -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	if (!filename)
		return (-1);
	/*open file, create if it doesnt exist, truncate it if already exists*/
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == 0)
		return (1);
	/*lenght of text_content*/
	for (i = 0; text_content[i]; i++)
		;
	/*write text content to the file*/
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
