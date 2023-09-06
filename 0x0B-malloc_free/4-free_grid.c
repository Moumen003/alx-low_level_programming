#include "main.h"

/**
* free_grid - fn name
* @grid: bos keda
* @height: we ba3den
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
