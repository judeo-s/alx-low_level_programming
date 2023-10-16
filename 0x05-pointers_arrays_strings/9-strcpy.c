#include "main.h"

/**
 * _strcpy - a function that copies string from a source to destination
 *
 * @dest: Pointer to a char variable
 * @src:  Pointer to a char variable
 * Return: *char
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	y = 0;
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
		y++;
	}

	dest[y] = '\0';
	return (dest);
}
