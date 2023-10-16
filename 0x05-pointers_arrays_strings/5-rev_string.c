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
 * rev_string - a function that prints a string in reverse
 *
 * @s: Pointer to an char variable
 * Return: void
 */
void rev_string(char *s)
{
	int size = _strlen(s) - 1;
	int index = 0;
	int i;
	static char temp_array[1000];

	for (i = size; i >= 0; --i)
	{
		temp_array[index] = s[i];
		index++;
	}
	temp_array[size + 1] = '\0';

	for (i = 0; temp_array[i] != '\0'; i++)
	{
		s[i] = temp_array[i];
	}
}
