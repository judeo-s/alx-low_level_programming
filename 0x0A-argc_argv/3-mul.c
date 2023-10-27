#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is where the program starts
 * This program prints all arguments it receives.
 *
 * @argc: int
 * @argv: char **
 * Return: int
 */
int main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
