#include <stdlib.h>

/**
 *free_grid - frees a 2 dimensiona
 *l grid previously created by your alloc_grid function
 *@grid: pointer to a 2D array of integers
 *@height: height of the grid
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
