#include "main.h"


/**
 * array_range - a function that creates an array of integers.
 *
 * @min: int
 * @max: int
 * Return: int *
 */
int *array_range(int min, int max)
{
	int *num_array;
	int index, x;

	if (min < max)
	{
		return (NULL);
	}

	num_array = malloc(sizeof(int) * (max - min) + 1);
	if (num_array == NULL)
	{
		return (NULL);
	}
	index = 0;
	for (x = min; x <= max; x++)
	{
		num_array[index] = x;
		index++;
	}
	return (num_array);
}
