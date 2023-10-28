#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number
 *  of coins to make change for an amount of money
 *
 * @argc: int
 * @argv: char **
 * Return: int
 */
int main(int argc, char *argv[])
{
	int cents, number_of_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
			{
				cents -= 25;
			}
			else if (cents >= 10)
			{
				cents -= 10;
			}
			else if (cents >= 5)
			{
				cents -= 5;
			}
			else if (cents >= 2)
			{
				cents -= 2;
			}
			else if (cents >= 1)
			{
				cents -= 1;
			}
			number_of_coins += 1;
		}
	}
	printf("%d\n", number_of_coins);
	return (0);
}
