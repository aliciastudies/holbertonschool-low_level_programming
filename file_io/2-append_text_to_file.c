#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to be created
 * @text_content: a NULL terminating string
 *
 * Return: 1, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num;
	ssize_t file_write;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	num = 0;
	while (text_content[num] != '\0')
	{
		num = num + 1;
	}
	file_write = write(fd, text_content, num);
	if (file_write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);

}
