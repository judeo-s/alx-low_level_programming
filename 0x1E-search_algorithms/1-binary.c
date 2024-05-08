#include <stdio.h>


/**
 * array_print - a function that prints the elements in an array.
 *
 * @array: int *
 * @min: size_t
 * @max: size_t
 */
void array_print(int *array, int min, int max)
{
	int index;

	printf("Searching in array: ");
	for (index = min; index <= max; index++)
	{
		printf("%d", array[index]);

		if (index < max)
			printf(", ");
	}
	printf("\n");
}


/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: int *
 * @size: size_t
 * @value: int
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	int min, max, mid;

	min = 0;
	max = size - 1;

	for ( ; min <= max ; )
	{
		array_print(array, min, max);
		mid = (max + min) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			max = mid - 1;
		else
			min = mid + 1;
	}
	return (-1);
}
