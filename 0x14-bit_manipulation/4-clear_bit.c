#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 *
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (n == NULL)
		return (-1);

	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);

	*n &= ~mask;

	return (1);
}
