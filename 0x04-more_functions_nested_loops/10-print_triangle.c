#include "main.h"

/**
 * print_triangle - Prints diagonal lines on the the screen
 *
 * @n: integer input
 * Return: None
 */
void print_triangle(int n)
{
	int row;

	if (n > 0)
	{
		int index;

		for (row = 1; row <= n; ++row)
		{
			for (index = 1; index <= n; ++index)
			{
				if ((row + index)  <= n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
