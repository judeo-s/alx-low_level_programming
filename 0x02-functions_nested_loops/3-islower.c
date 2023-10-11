#include "main.h"

/**
 * _islower - Checks if letter is lowercase or not
 *
 * @c: Integer input
 * Return: Integer(1) if successful and (0) if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
