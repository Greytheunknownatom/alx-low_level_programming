#include "main.h"
/**
* free_grid - this function frees a 2 dimensional grid
* previously created by the alloc_grid function
* prototype for the function - void free_grid(int **grid, int height)
* @grid: the grid
* @height: the height of the grid
*/
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
