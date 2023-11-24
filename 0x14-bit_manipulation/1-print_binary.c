#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 *
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = n;
	int flag = 0, i, bit;

	if (num == 0)
		_putchar('0');

	for (i = 31; i >= 0; --i)
	{
		bit = (int)(num >> i) & 1;

		if (bit)
			flag = 1;

		if (flag)
			_putchar(bit + '0');
	}
}
