#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024


/**
 * reader - a function that does a read operation
 *
 * @n_read: int *
 * @n_written: int *
 * @fd_to: int *
 * @fd_from: int *
 * @buffer: char *
 * @argv: char *
 * Return: void
 */
void reader(int *n_read, int *n_written, int *fd_to, int *fd_from,
		char *buffer, char *argv)
{
	while ((*n_read = read(*fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		*n_written = write(*fd_to, buffer, *n_read);
		if (*n_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
			exit(99);
		}
		if (*n_written != *n_read)
		{
			dprintf(STDERR_FILENO, "Error: Short write to %s\n", argv);
			exit(99);
		}
	}
}

/**
 * main - a function that starts the program
 *
 * @argc: int
 * @argv: char*
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, n_read, n_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	reader(&n_read, &n_written, &fd_to, &fd_from, buffer, argv[2]);
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

