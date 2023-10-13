#include "main.h"

/**
 * print_square - Prints square on the the screen
 *
 * @size: integer input
 * Return: None
 */
void print_square(int size)
{
	int length;

	if (size > 0)
	{
		int breadth;

		for (length = 1; length <= size; ++length)
		{
			for (breadth = 1; breadth <= size; ++breadth)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
