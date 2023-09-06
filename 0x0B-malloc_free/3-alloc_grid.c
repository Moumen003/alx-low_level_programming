#include "main.h"

/**
* alloc_grid - fn name
* @width: bos
* @height: keda
* Return: pointer to 2d
*/

int **alloc_grid(int width, int height)
{

	int i, j;

	int **grid;

	grid = malloc(sizeof(*grid) * height);

	if (width <= 0 || height <= 0 || grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
