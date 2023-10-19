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
 * string_toupper - a function to convert all lowercase characters
 *                  in a string to uppercase
 *
 * @a: char pointer
 * Return: char pointer
 */
char *string_toupper(char *a)
{
	int str_len, i;

	str_len = _strlen(a);
	for (i = 0; i < str_len; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		else
		{
			continue;
		}
	}
	return (a);
}
