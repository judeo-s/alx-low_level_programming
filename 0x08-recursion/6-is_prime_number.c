/**
 * prime_checker - a function that tests y against a series of numbers.
 *
 * @x: int
 * @y: int
 * Return: int
 */
int prime_checker(int x, int y)
{
	if ((x * x) <= y)
	{
		if ((y % x) == 0 || y % (x + 2) == 0)
		{
			return (0);
		}
		prime_checker((x + 6), y);
	}
	return (1);
}


/**
 * is_prime_number - a function that returns 1 if the input integer
 *                   is a prime number, otherwise return 0.
 *
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if ((n % 2) == 0 || (n % 3) == 0)
	{
		return (0);
	}
	else
	{
		return (prime_checker(5, n));
	}
}
