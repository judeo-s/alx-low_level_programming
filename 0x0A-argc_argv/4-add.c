#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - This is where the program starts
 * This program multiplies two numbers
 *
 * @argc: int
 * @argv: char **
 * Return: int
 */
int main(int argc, char **argv)
{
	int sum = 0;

	argc--;
	if (argc > 1)
	{
		while (argc > 0)
		{
			if (atoi(argv[argc]))
			{
				sum += atoi(argv[argc]);
				argc--;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
