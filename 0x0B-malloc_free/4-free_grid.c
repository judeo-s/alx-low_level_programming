#include "main.h"


/**
 * free_grid - a function that frees a 2 dimensional grid
 *             previously created by a "alloc_grid" function.
 * @grid: int **
 * @height: int
 */
void free_grid(int **grid, int height)
{
	if (height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
