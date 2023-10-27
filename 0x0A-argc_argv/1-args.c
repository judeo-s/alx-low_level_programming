#include <stdio.h>


/**
 * main - This is where the program starts
 * This program prints the number of arguments passed to it
 *
 * @argc: int
 * @argv: char **
 * Return: int
 */
int main(int argc, char **argv)
{
	argv[0] += 0;
	printf("%d\n", argc - 1);
	return (0);
}
