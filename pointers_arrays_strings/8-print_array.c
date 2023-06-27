#include <stdio.h>
#include "main.h"
/**
 *print_array - prints `n` elements of an array of integers,
 *followed by a new line
 *@a: array input from user
 *@n: integer input from user
 *Return: 0
 */

void print_array(int *a, int n)
{
	int length;

	length = 0;
	while (length < n)
	{
		if (length == n - 1)
		{
			printf("%d", a[length]);
		}
		else
		{
			printf("%d, ", a[length]);
		}

		length = length + 1;
	}

	printf("\n");
}
