#include "main.h"

/**
 *_memset - a function to allocate a certain character to
 *          specific slice of memory
 *
 * @s: char *
 * @b: char
 * @n: unsigned int
 * Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
