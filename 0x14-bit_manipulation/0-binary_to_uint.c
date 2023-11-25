#include "main.h"


/**
 * _strlen - a function that returns the size of a string
 *
 * @s: Pointer to an char variable
 * Return: int
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		continue;
	}

	return (i);
}


/**
 * binary_to_uint - a function that converts a binary number
 *                  to an unsigned int.
 * @b: const char *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = _strlen(b);
	unsigned int result = 0;
	unsigned int i;

	if (b == NULL)
		return (0);

	if (len == 0)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			result = (result << 1) | 1;
		else if (b[i] == '0')
			result <<= 1;
		else
			return (0);
	}
	return (result);
}
