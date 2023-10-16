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
 * puts2 - a function that prints every other character of a string
 *
 * @str: Pointer to an char variable
 * Return: void
 */
void puts2(char *str)
{
	int size = _strlen(str) - 1;
	int counter = 0;

	while (counter <= size)
	{
		_putchar(str[counter]);
		counter = counter + 2;
	}
	_putchar('\n');
}
