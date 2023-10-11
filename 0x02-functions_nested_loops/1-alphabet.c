#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabets to the screen
 * _putchar - Print character to screen
 *
 * Return: None
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}

	_putchar('\n');
}
