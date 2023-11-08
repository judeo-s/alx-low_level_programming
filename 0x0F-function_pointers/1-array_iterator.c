#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a
 *                  parameter on each element of an array.
 *
 * @array: int *
 * @size: size_t
 * @action: void function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long x = 0;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
