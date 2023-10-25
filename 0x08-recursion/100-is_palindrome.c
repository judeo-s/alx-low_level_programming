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
 * palindrome_check - a function that cross-checks each letter of the string
 *
 * @forward: int
 * @reverse: int
 * @string: char *
 * Return: int
 */
int palindrome_check(int forward, int reverse, char *string)
{
	if (string[forward] != '\0' && reverse >= 0)
	{
		if (string[forward] == string[reverse])
		{
			return (palindrome_check(forward + 1, reverse - 1, string));
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
	int len = _strlen(s) - 1;

	return (palindrome_check(0, len, s));
}
