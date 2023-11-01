#include "main.h"

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
 * argstostr - a function that concatenates
 *             all the arguments of your program.
 * @ac: int
 * @av: char **
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
	int num = 1, size = 0, index = 0;
	static char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (num = 0; num <= ac; num++)
	{
		size += _strlen(av[num]) + 1;
	}

	concat = malloc(sizeof(char) * size + 1);

	for (num = 0; num < ac; num++)
	{
		while (*av[num] != '\0')
		{
			concat[index] = *av[num];
			index++;
			av[num]++;
		}
		concat[index] = '\n';
		index++;
	}
	concat[index] = '\0';
	return (concat);
}
