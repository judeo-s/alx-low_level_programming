#include "main.h"

/**
 * _abs - How to make get the absolute value of an integer
 *
 * @n: Integer input
 * Return: Absolute integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (n / -1);
	}

	return (0);
}
