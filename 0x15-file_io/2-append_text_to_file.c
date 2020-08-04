#include "holberton.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 success, -1 error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr; /*file descriptor and write*/
	int i;			/*lenght of text_content*/

	if (!filename)
		return (-1);
	/*open file*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	/*lenght of text_content*/
	for (i = 0; text_content[i]; i++)
		;
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
