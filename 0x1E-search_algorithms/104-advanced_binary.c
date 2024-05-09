#include <stdio.h>

/**
  * advanced_binary_recursive - Searches recursively for a value in a sorted
  * array of integers using binary search.
  * 
  * @array: int *
  * @left: size_t
  * @right: size_t
  * @value: int
  * Return: int
  */
int binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (binary_recursive(array, left, i, value));
	return (binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array of
  * integers using advanced binary search.
  * 
  * @array: int *
  * @size: size_t
  * @value: int
  * Return: int
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
}
