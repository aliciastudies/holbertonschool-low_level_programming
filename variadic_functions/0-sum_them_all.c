#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 *@n: parameters to be summed
 *
 * Return: 0 if n === 0, otherwise return sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	result = 0;
	i = 0;
	while (i < n)
	{
		result = result + va_arg(args, int);
		i = i + 1;
	}
	va_end(args);
	return (result);
}
