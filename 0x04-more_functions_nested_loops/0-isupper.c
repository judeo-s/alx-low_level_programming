#include "main.h"

/**
 * _isupper - Checks if letter is uppercase or not
 *
 * @c: Integer input
 * Return: Integer(1) if successful and (0) if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
