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
 *_strncat - a function to concatinate a strings to n-size of another string
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int counter = dest_len;
	int i;

	if (n < src_len)
		src_len = n;

	for (i = 0; i < src_len; i++)
	{
		dest[counter] = src[i];
		counter++;
	}

	dest[counter] = '\0';
	return (dest);
}
