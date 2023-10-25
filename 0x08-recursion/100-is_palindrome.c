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


/**
 * palindrome_check - a function that cross-checks each letter of the string
 *
 * @next: int
 * @back: int
 * @string: char *
 * Return: int
 */
int palindrome_check(int next, int back, char *string)
{
	if (string[next] != '\0' && back >= 0)
	{
		if (string[next] == string[back])
		{
			return (palindrome_check(next + 1, back - 1, string));
		}
		else
		{
			return (0);
		}
	}
	return (1);

}

/**
 * is_palindrome - a function that returns 1 if a string is a
 *                 palindrome and 0 if not.
 *
 * @s: char *
 * Return: int
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (palindrome_check(0, len, s));
}
