#include "main.h"

/**
 * print_to_98 - Print numbers fron n to 98
 *
 * @n: An input integer
 * Returns: None
 */
void print_to_98(int n)
{
	int temp = n;

	if (n < 98)
	{
		while (temp < 98)
		{
			printf("%d, ", temp);
			temp++;
		}
	}
	else
	{
		while (temp > 98)
		{
			printf("%d, ", temp);
			temp--;
		}
	}
	printf("98\n");
}
