#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to be iterated
 * @size: size of array
 * @cmp: pointer to a function that will be used to compare values
 *
 * Return: -1 if no element matches or if size <= 0, otherwise i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if ((cmp)(array[i]) == 0)
		{
			i = i + 1;
		}
		else
		{
			return (i);
		}
	}
	return (-1);
}
