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

	static char temp[1000];
	int counter = 0;
	int i;

	for (i = 0; i < dest_len; i++)
	{
		temp[counter] = dest[i];
		counter++;
	}

	if (n < src_len)
		src_len = n;

	for (i = 0; i < src_len; i++)
	{
		temp[counter] = src[i];
		dest[counter] = src[i];
		counter++;
	}
	temp[counter] = '\0';
	return (temp);
}
