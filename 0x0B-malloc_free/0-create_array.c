#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 *                and initializes it with a specific char.
 *
 * @size: unsigned int
 * @c:    char
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
	static char *array;
	unsigned int x;

	array = NULL;

	if (size > 0)
	{
		array = (char *)malloc(sizeof(char) * size);
		if (array == NULL)
		{
			return (array);
		}
		for (x = 0; x < size; x++)
		{
			array[x] = c;
		}

		array[x] = '\0';
	}
	return (array);
}
