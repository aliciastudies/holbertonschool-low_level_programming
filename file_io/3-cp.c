#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_file - read from file descriptor
 * @fd_from: file descriptor to be read from
 * @buf: name of buffer to read in to
 * @size: max number of bytes to be read
 * @fn: name of file to be read
 * Return: number of bytes read on success, 98 on failure, 0 at end of file
 */

ssize_t read_file(int fd_from, char *buf, int size, char *fn)
{
	ssize_t read_file;

	read_file = read(fd_from, buf, size);
	if (read_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn);
		exit(98);
	}
	return (read_file);
}

/**
 * close_file - closes fd
 * @fd: fd to be closed
 *
 * Return: void
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments entered
 * @argv: array of pointers to char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	char buf[1024];
	ssize_t file_read;
	ssize_t file_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read");
		dprintf(STDERR_FILENO, " from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_read = read_file(fd_from, buf, sizeof(buf), argv[1]);
	while (file_read != 0)
	{
		file_write = write(fd_to, buf, file_read);
		if (file_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write");
			dprintf(STDERR_FILENO, " to %s\n", argv[2]);
			exit(99);
		}
		file_read = read_file(fd_from, buf, sizeof(buf), argv[1]);
	}
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
