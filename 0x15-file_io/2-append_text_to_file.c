#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: const char *
 * @text_content: char *
 * Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, status, words = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
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
