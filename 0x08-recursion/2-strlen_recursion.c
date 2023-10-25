#include "main.h"

/**
 *_strlen_recursion - a function that gets a length of a string.
 *
 * @s: char *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = 1 + _strlen_recursion(s + 1);
		return (len);
	}
}
