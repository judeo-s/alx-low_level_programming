#include "main.h"

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
	int size = sizeof(str);

	if (str == NULL)
	{
		string = NULL;
	}
	else
	{
		int x;

		string = (char *)malloc(sizeof(char) * size);

		for (x = 0; x < size; x++)
		{
			string[x] = str[x];
		}
		string[x] = '\0';
	}
	return (string);
}
