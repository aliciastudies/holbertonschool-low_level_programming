#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds integers
 * @a: integer
 * @b: integer
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - minus integers
 * @a: integer
 * @b: integer
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies integers
 * @a: integer
 * @b: integer
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers
 * @a: integer
 * @b: integer
 *
 * Return: int
 */

int op_div(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}



/**
 * op_mod - finds remainder of integers
 * @a: integer
 * @b: integer
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
