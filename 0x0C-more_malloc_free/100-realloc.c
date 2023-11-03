#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: void *
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp;
	unsigned int x;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		free(ptr);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	temp = ptr;
	for (x = 0; x < old_size; x++)
	{
		new_ptr[x] = temp[x];
	}

	free(ptr);
	return (new_ptr);
}
