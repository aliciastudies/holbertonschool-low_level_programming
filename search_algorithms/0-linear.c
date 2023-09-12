#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located if yay, otherwise -1 if nay
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (value == -1 || array == NULL)
	{
		return (-1);
	}
	index = 0;
	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (value == array[index])
		{
			return (index);
		}
		index = index + 1;
	}
	return (-1);
}
