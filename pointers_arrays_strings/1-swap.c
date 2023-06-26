#include "main.h"
/**
 *swap_int -
 *@a: first integer from user
 *@b: second integer from user
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;

	*a = *b;
	*b = c;

}

