#include <stdlib.h>

/**
 * free_grid - free 2d array made
 * @grid: pointer to array
 * @height: height of 2d array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}

	free(grid);
}
