#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 *  integers
 * @a: array being evaluated
 * @size: Dimensions of matrix
 */

void print_diagsums(int *a, int size)
{
	int dia_1;
	int dia_2;
	int forward;
	int backward;

	dia_1 = 0;
	dia_2 = 0;
	forward = 0;
	backward = size - 1; /* starts in the last element of the row */
	while (forward < size * size) /* loop interates over all elements */
	{
		/* top left to bottom right */
		dia_1 = dia_1 + a[forward];
		/* bottom left to top right */
		dia_2 = dia_2 + a[backward];

		forward = forward + size + 1;
		/* e.g. if size = 3, second loop is 0 = 0 + 3 + 1 == moves forward 4 times */
		backward = backward + size - 1;
		/* e.g. if size = 3, second loop is 3 = 3 + 3 - 1 == moves forward 2 times */
	}
	printf("%d, %d\n", dia_1, dia_2);
}
