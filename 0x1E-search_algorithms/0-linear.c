#include <stdio.h>

/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algoritm
 *
 * @array: int *
 * @size: size_t
 * @value: int
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		if (array[index] == value)
			return ((int) index);
	}
	return (-1);
}


