#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t file_read;
	ssize_t file_write;
	char buf[10000];

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	file_read = read(fd, buf, letters);
	if (file_read == -1)
	{
		return (0);
	}
	file_write = write(1, buf, file_read);
	if (file_write == -1 || file_read != file_write)
	{
		return (0);
	}
	close(fd);
	return (file_write);
}
