#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: the size of elements
 *
 * Return: pointer to allocated memory or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array =  (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		i = i + 1;
		array[i] = 0;
	}
	return (array);

}
