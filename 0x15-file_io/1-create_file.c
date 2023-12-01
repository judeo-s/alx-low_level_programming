#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - a function that creates a file
 *
 * @filename: const char *
 * @text_content: char *
 * Return: int
*/
int create_file(const char *filename, char *text_content)
{
	int file, status, words = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	while (text_content[words] != '\0')
		words++;

	status = write(file, text_content, words);
	if (status == -1)
		return (-1);

	close(file);
	return (1);
}
