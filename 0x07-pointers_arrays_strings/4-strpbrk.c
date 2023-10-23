#include "main.h"

/**
 *_strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: char *
 * @accept: char *
 * Return: char *
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
