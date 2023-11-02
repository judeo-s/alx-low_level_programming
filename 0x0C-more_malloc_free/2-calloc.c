#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: unsigned int
 * @size:  unsigned int
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size * nmemb; x++)
	{
		pointer[x] = 0;
	}

	return (pointer);
}
