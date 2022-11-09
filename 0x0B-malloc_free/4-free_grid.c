#include "main.h"
#include <stdlib.h>

/**
 * free_grind -Write a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 *
 * @grid: Array of memory
 * @height: Height of grid array (rows)
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
