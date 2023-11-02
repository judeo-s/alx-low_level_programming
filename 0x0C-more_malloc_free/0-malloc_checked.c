#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc.
 *
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory != NULL)
	{
		return (memory);
	}
	else
	{
		exit(98);
	}
}
