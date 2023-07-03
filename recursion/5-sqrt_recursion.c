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
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
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
