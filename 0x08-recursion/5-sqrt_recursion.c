/**
 * find_sqrt - a function that uses a range of numbers to
 *             find the square root of num
 *
 * @low: int
 * @high: int
 * @num: int
 * Return: int
 */
long find_sqrt(long low, long high, long num)
{
	long mid = (low + high) / 2;
	long sqr = mid * mid;

	if (sqr - (long int)num == 0)
	{
		return (mid);
	}
	else if (low == high)
	{
		return (-1);
	}
	else if (sqr < num)
	{
		return (find_sqrt(mid + 1, high, num));
	}
	else
	{
		return (find_sqrt(low + 1, mid, num));
	}
}


/**
 * _sqrt_recursion -  a function that returns
 *        the natural square root of a number.
 *
 * @n: int
 * Return: int
 */
int _sqrt_recursion(long n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(0, n, n));
	}
}
