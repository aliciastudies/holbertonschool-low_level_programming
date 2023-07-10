#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int for memory size
 *
 * Return: pointer to the allocated memory or 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(sizeof(*pointer) * b);
	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);

}
