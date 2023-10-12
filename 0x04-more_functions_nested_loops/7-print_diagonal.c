#include "main.h"

/**
 * print_diagonal - Prints diagonal lines on the the screen
 *
 * @n: integer input
 * Return: None
 */
void print_diagonal(int n)
{
	int lines;

	if (n > 0)
	{
		int index;

		for (lines = 1; lines <= n; ++lines)
		{
			for (index = 0; index <= lines; ++index)
			{
				if (index == lines)
				{
					_putchar('\\');
				}

			_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
