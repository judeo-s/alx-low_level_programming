#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 *
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);

	bit = ((n & (1 << index)) ? 1 : 0);
	
	return (bit);
}
