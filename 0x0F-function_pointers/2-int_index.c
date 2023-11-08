#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer.
 *
 * @array: int *
 * @size: int
 * @cmp: int function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, x;

	if (size <= 0)
	{
		return (-1);
	}

	index = -1;
	x = 0;
	while (x < size)
	{
		if (cmp(array[x]))
		{
			index = x;
			return (index);
		}
		x++;
	}
	return (index);
}
