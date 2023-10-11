#include <stdio.h>

/**
 * main - Startting point for the code
 *
 * Description: Prints the first 50 Fibonacci numbers
 * Return: Returns 0 if successful
 */
int main(void)
{
	unsigned long t1 = 1, t2 = 2, nextTerm = 0;
	int i;

	printf("%lu, %lu, ", t1, t2);

	for (i = 3; i <= 50; ++i)
	{

		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		if (i != 50)
		{
			printf("%lu, ", nextTerm);
		}
		else
		{
			printf("%lu\n", nextTerm);
		}
	}
	return (0);
}

