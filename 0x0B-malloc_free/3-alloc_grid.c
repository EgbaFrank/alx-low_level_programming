#include <stdlib.h>

/**
 * alloc_grid - makes a 2d array in memory
 * @height: height of array
 * @width: lenght of array
 *
 * Return: A pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL || width == 0 || height == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; ++i)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
