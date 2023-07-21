#include "main.h"

/**
 * find_root - find the natural square root of a number
 * @n: int base value
 * @i: int value to check against
 *
 * Return: int
 */

int find_root(int n, int i)
{
	if (i * i == n) /* square of a i is multiplying i by itself */
	{
		return (i);
	}
	else if (i * i > n)
	/**
	 * if the square of i is already greater than n,
	 * it means that no integer i can exist
	 * that satisfies the condition i * i = n
	 */
	{
		return (-1);
	}
	else
	{
		return (find_root(n, i + 1));
	}
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 * @n: int base value
 * Return: if n doesn't have a natural square root, return -1
 */

int _sqrt_recursion(int n)
{
	return (find_root(n, 0));
}
