#include <stdio.h>


/**
 * main - This is where the program starts
 * This program prints its name, followed by a new line
 *
 * @argc: int
 * @argv: char **
 * Return: int
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
