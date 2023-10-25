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
	int len = _strlen(s) - 1;

	return (palindrome_check(0, len, s));
}
