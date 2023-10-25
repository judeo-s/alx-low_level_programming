/**
 * find_sqrt - a function that uses a range of numbers to
 *             find the square root of num
 *
 * @low: int
 * @high: int
 * @num: int
 * Return: int
 */
int find_sqrt(int low, int high, int num)
{
	int mid = (low + high) / 2;
	int sqr = mid * mid;

	if (sqr - num == 0)
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
int _sqrt_recursion(int n)
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
