#include "main.h"

/**
 * print_numbers - Prints numbers from 0-9 to the screen
 * _putchar - Print character to screen
 *
 * Return: None
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}

	_putchar('\n');
}
