#include "main.h"

/**
 * flip_bits -  a function that returns the number of bits you would need
 *              to flip to get from one number to another.
 *
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0, xor = n ^ m;

	while (xor)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
