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
 * _strdup - a function that returns a pointer to a newly
 *           allocated space in memory, which contains a copy
 *           of the string given as a parameter.
 *
 * @str: char *
 * Return: char *
 */
char *_strdup(char *str)
{
	static char *string;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int size = _strlen(str);
		int x;

		string = (char *)malloc(sizeof(char) * size);

		if (string == NULL)
		{
			return (string);
		}
		for (x = 0; x <= size; x++)
		{
			string[x] = str[x];
		}
	}
	return (string);
}
