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
 *_strcat - a function to concatinate to strings
 *
 * @dest: char pointer
 * @src: char pointer
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int total_len = dest_len + src_len;

	int counter = 0;
	int i;

	for (i = dest_len; i < total_len; i++)
	{
		dest[i] = src[counter];
		counter++;
	}

	return (dest);
}
