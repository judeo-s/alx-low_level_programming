#include <stdio.h>

/**
 * main - Startting point for the code
 *
 * Description: Prints the first 50 Fibonacci numbers
 * Return: Returns 0 if successful
 */
int main(void)
{
	unsigned long t1 = 1, t2 = 2, nextTerm = 0, sum = 2;

	while (nextTerm <= 4000000)
	{

		nextTerm = t1 + t2;

		if (nextTerm % 2 == 0)
		{
			sum += nextTerm;
		}

		t1 = t2;
		t2 = nextTerm;
	}

	printf("%lu\n", sum);
	return (0);
}

