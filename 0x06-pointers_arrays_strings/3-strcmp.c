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
 *_strcmp - a function to copies a strings to n-size of another string
 *
 * @s1: char pointer
 * @s2: char pointer
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int src_len = _strlen(s1);
	int i, result = 0;

	for (i = 0; i < src_len; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			result = s1[i] - s2[i];
			break;
		}
	}

	return (result);
}
