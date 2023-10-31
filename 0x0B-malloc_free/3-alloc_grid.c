#include "main.h"

/**
 * init_0 - a function that sets all the values
 *          in a multi-dimensional array to zeros.
 *
 * @array: int **
 * @height: int
 * @width: int
 * Return: void
 */
void init_0(int **array, int height, int width)
{
	int x, y;

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			array[x][y] = 0;
		}
	}
}


/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 *              array of integers.
 *
 * @width: int
 * @height: int
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int **multi_array;
	int x;

	if (width <= 0 || height <= 0)
	{
		multi_array = NULL;
	}
	else
	{
		multi_array = (int **)malloc(sizeof(int *) * height);
		if (multi_array == NULL)
		{
			return (NULL);
		}
		for (x = 0; x < height; x++)
		{
			multi_array[x] = (int *)malloc(sizeof(int) * width);
			if (multi_array[x] == NULL)
			{
				for (; x >= 0; x--)
				{
					free(multi_array[x]);
				}
				free(multi_array);
			}
		}
		init_0(multi_array, height, width);
	}
	return (multi_array);
}
