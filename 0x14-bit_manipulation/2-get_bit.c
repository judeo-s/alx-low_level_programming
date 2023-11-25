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
	unsigned long int num = n;
	int bit;
	unsigned int i;

	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);

	for (i = 31; i >= index; --i)
	{
		bit = (int)(num >> i) & 1;
		if (i == 0)
			break;
	}
	return (bit);
}
