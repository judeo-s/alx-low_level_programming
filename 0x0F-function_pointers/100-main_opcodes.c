#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function begins the whole program
 *
 * @argc: int
 * @argv: char **
 * Return: int
*/

int main(int argc, char *argv[])
{
	int i, bytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
