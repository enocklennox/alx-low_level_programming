#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width of the grid
 *@height: height of the grid
 *
 *Return: pointer to a 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));

		if (grid[i] == NULL)
		{
				for (j = i - 1; j >= 0; j--)
					free(grid[j]);
				free(grid);
				return (NULL);
		}
	}

	return (grid);
}
