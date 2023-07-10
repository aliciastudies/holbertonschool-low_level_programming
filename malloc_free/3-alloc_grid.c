#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: columns
 * @height: rows
 *
 * Return: pointer, NULL if width & height = 0 or func fails
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		/* allocating memory for each row */
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			while (i >= 0)
			{
				i = i - 1;
				free(array[i]);
			}
			free(array);
			return (NULL);
		}

	j = 0;
	while (j < width)
	{
		array[i][j] = 0;
		j = j + 1;
	}
	i = i + 1;
	}

	return (array);
}
