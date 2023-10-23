#include "main.h"

/**
 *_strchr - a function to copy content of a certain string to
 *          another string specific.
 *
 * @s: char *
 * @c: char
 * Return: char *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
