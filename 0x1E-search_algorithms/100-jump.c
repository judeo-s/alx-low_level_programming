#include <stdio.h>
#include <math.h>


/**
 * jump_search - a function that searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 *
 * @array: int *
 * @size: size_t
 * @value: int
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	int steps, low, high;

	if (!array)
		return (-1);

	steps = sqrt((double)size);
	low = 0;
	high = steps;

	for ( ; low < (int)size; )
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);

		if (array[low] <= value &&
				(value <= array[high] || low + steps > (int)size))
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);

			for ( ; low <= high && low < (int)size; low++)
			{
				printf("Value checked array[%d] = [%d]\n", low, array[low]);
				if (array[low] == value)
					return (low);
			}
		}
		low = low + steps;
		high = high + steps;
	}
	return (-1);

}
