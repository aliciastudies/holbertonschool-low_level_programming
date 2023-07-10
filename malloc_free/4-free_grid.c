#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid previously created
 * @grid: grid to be freed
 * @height: number of columns
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
}
