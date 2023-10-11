#include "main.h"

/**
 * _isalpha - Checks if letter is an alphabet
 *
 * @c: Integer input
 * Return: Integer(1) if true and (0) if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
