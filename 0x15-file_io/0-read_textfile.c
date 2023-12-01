#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile -  a function that reads a text file and prints
 *                  it to the POSIX standard output.
 *
 * @letters: size_t
 * @filename:const char *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t check, count;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	check = read(file, buffer, letters);
	if (check == -1)
		return (0);

	count = write(STDOUT_FILENO, buffer, check);
	if (count == -1 || check != count)
		return (0);

	free(buffer);
	close(file);

	return (count);
}
