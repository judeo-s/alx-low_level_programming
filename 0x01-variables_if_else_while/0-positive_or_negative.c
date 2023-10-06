#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
 * main: The starting point of the program
 * srand: Uses the current instance in time as the seeding value for rand
 * rand: It produces random integers.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}

	return (0);
}
