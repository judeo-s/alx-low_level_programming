#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is where the program starts
 * This program prints its name, followed by a new line
 *
 * @argc: int
 * @argv: char **
 * Return: int
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
