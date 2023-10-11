#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 *
 * @n: Integer input
 * Return: Integer
 */
int print_last_digit(int n)
{
	int digit;

	if (n >= 0)
	{
		digit = n % 10;
		_putchar('0' + digit);
		return (digit);
	}

	if (n < 0)
	{
		digit = n % 10;
		digit /= -1;
		_putchar('0' + digit);
		return (digit);
	}

	return (0);
}
