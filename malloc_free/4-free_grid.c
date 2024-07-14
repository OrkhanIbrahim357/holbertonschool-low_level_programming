#include "main.h"
#include <stdlib.h>

/**
 * free_grid - main
 * @grid: vpp1
 * @height: v2
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
