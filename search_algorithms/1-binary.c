#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of ints
 * @array: a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, index;

	low = 0;
	high = size - 1;
	if (value == -1 || array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		index = low;
		while (index <= high)
		{
			printf("%d", array[index]);
			if (index < high)
			{
				printf(", ");
			}
			index = index + 1;
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
