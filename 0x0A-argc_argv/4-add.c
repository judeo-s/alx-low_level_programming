#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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
	int sum = 0, i;
	char *number;

	if (argc > 1)
	{
		for (i = 1; i <= argc - 1; i++)
		{
			number = argv[i];
			while (*number != '\0')
			{
				if(isdigit(*number))
				{
					number++;
					continue;	
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
