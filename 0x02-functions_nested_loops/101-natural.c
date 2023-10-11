#include <stdio.h>

/**
 * main - The beginning of the program
 *
 * Description: To calculate the sum of multiples of 3 and 5 between 0 to 1204
 * Return: Integer (0) if successful
 */
int main(void)
{
	int sum, number;

	for (number = 0; number < 1024; number++)
	{
		if (number % 3 == 0)
		{
			sum += number;
		}

		if (number % 5 == 0)
		{
			sum += number;
		}
	}

	printf("%d\n", sum);

	return (0);
}
