#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: array of integers
 *@n: number of elements to swap
 *Return: 0
 */

void reverse_array(int *a, int n)
{
	int length;
	int temp;
	int swap_one;
	int swap_two;

	length = 0;
	while (length < n) /* determine length of array */
	{
		length = length + 1;
	}
	swap_one = length - 1; /* start at last element */
	swap_two = 0; /* start at first */
	while (swap_two < n / 2) /* swap elements of array to reverse order */
	{
		temp = a[swap_two];
		a[swap_two] = a[swap_one];
		a[swap_one] = temp;
		swap_one = swap_one - 1; /* move towards start */
		swap_two = swap_two + 1; /* move towards end */
	}
}

