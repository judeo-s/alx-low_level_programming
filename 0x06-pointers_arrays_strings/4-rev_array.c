#include "main.h"

/**
 * reverse_array - a function to reverse the order of an int array
 *
 * @a: int pointer
 * @n: int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp[100];
	int i;
	int counter;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[i];
	}

	counter = 0;

	for (i = n - 1; i >= 0; i--)
	{
		a[counter] = temp[i];
		counter++;
	}
}
