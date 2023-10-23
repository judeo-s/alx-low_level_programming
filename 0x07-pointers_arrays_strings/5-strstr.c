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
 *_strstr - a function that locates a substring.
 *
 * @haystack: char *
 * @needle: char *
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_len = _strlen(needle) - 1;
	int y, flag;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			flag = 0;
			for (y = 0; y < needle_len; y++)
			{
				if (haystack[y] == needle[y] && needle[y] != '\0')
				{
					flag = 1;
				}
			}
			if (flag)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return ("\0");
}
