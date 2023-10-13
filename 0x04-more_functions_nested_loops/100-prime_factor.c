#include <stdio.h>
#include <math.h>

/**
 * largest_factor - Gets the largest prime factor of a number n
 *
 * @n: long input
 * Return: long
 */
long largest_factor(long n)
{
	long maxPrime, i;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 1;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		maxPrime = n;
	}

	return (maxPrime);
}


/**
 * main - The beginning point of the program.
 *
 * Return: int
 */
int main(void)
{
	long n = 612852475143;

	printf("%ld\n", largest_factor(n));

	return (0);
}
