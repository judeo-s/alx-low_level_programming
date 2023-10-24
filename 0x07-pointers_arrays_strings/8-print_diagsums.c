#include "main.h"

/**
 * print_diagsums - a function that prints the sum
 * of the two diagonals of a square matrix of integers.
 *
 * @a: multi array
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int side1 = 0, side2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		side1 += a[i * size + i];
		side2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", side1, side2);
}
