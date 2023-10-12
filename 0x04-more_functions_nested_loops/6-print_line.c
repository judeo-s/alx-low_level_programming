#include "main.h"

/**
 * print_line - Prints lines on the the screen
 * 
 * @n: integer input
 * Return: None
 */
void print_line(int n)
{
	int lines;

	if (n > 0)
	{
		for (lines = 1; lines <= n; ++lines)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
