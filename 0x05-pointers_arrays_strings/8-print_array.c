#include "main.h"

/**
 * print_array - a function that prints the n elements in an array
 *
 * @a:	int pointer
 * @n:	int
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", *(a + i));
		}
		printf("%d\n", *(a + (n - 1)));
	}
	else
	{
		printf("\n");
	}
}
