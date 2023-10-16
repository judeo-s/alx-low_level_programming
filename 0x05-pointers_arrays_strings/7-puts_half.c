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
 * puts_half - a function that prints second half of a string
 *
 * @str: Pointer to an char variable
 * Return: void
 */
void puts_half(char *str)
{
	int size = _strlen(str);
	int counter;

	if ((size % 2) == 0)
	{
		counter = size / 2;
	}
	else
	{
		counter = (size - 1) / 2;
	}

	while (counter < size)
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
