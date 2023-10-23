#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring.
 *
 * @s: char *
 * @accept: char *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int x, flag;

	while (*s != '\0')
	{
		flag = 0;
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
			{
				count++;
				flag = 1;
				break;
			}
		}
	
		if (!flag)
		{
			break;
		}
		s++;
	}
	return (count);
}
