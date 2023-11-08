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

	index = -1;
	x = 0;
	if (array && cmp && size > 1)
	{
		while (x < size)
		{
			if (cmp(array[x]))
			{
				index = x;
				return (index);
			}
			x++;
		}
	}
	return (index);
}
