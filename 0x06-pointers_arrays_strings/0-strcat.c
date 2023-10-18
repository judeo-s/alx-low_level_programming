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

	static char temp[1000];
	int counter = 0;
	int i;

	for (i = 0; i < dest_len; i++)
	{
		temp[counter] = dest[i];
		counter++;
	}

	for (i = 0; i < src_len; i++)
	{
		temp[counter] = src[i];
		counter++;
	}

	temp[counter] = '\0';

	return (temp);
}
