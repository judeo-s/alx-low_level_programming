#include "main.h"

/**
 * _strlen - a function that returns the size of a string
 *
 * @s: Pointer to an char variable
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		continue;
	}

	return (i);
}


/**
 * print_rev - a function that prints a string in reverse
 *
 * @str: Pointer to an char variable
 * Return: void
 */
void print_rev(char *str)
{
	int i = _strlen(str) - 1;

	for (; i >= 0; --i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
