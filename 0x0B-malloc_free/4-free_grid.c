#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array previously created by alloc_grid
 * @grid: the 2D array to free
 * @height: the height of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
