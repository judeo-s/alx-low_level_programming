#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 * Return: char *
*/
char *leet(char *s)
{
	int i, counter;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int l337[] = {52, 51, 48, 55, 49};

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		for (i = 0; i < 5; i++)
		{
			if (s[counter] == lower[i] || s[counter] == upper[i])
			{
				s[counter] = l337[i];
				break;
			}
		}
	}
	return (s);
}
