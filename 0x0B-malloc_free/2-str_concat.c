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

	if (s == NULL)
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; ++i)
	{
		continue;
	}

	return (i);
}


/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: char *
 * @s2: char *
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	static char *string1;
	static char *string2;
	static char *concat;
	int size1, size2, x;

	string1 = s1;
	string2 = s2;

	if (string1 == NULL)
	{
		string1 = "";
	}
	if (string2 == NULL)
	{
		string2 = "";
	}

	size1 = _strlen(s1);
	size2 = _strlen(s2) + 1;
	x = 0;

	concat = (char *)malloc(sizeof(char) * size1 + size2);
	if (concat == NULL)
	{
		return (concat);
	}

	while (*string1 != '\0')
	{
		concat[x] = *string1;
		x++;
		string1++;
	}
	while (*string2 != '\0')
	{
		concat[x] = *string2;
		x++;
		string2++;
	}
	return (concat);
}
