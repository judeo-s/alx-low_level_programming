#include <stdio.h>


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
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
