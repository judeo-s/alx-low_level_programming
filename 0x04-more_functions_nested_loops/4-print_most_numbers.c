#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0-9 to the screen
 * _putchar - Print character to screen
 *
 * Return: None
 */
void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit == '2' || digit == '4')
		{
			continue;
		}
		_putchar(digit);
	}

	_putchar('\n');
}
