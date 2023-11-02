#include "main.h"

/**
 * _strlen - a function that returns the size of a string
 *
 * @s: Pointer to an char variable
 * Return: int
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

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
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: char *
 * @s2: char *
 * @n: unsigned int
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int s1_len, s2_len, counter, i;
	static char *concat;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	counter = s1_len;

	if (n < s2_len)
	{
		s2_len = n;
	}

	concat = (char *)malloc(s1_len + s2_len + n);
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		concat[counter] = s2[i];
		counter++;
	}
	concat[counter] = '\0';
	return (concat);
}
