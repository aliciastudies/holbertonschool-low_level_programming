#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers
 *
 * Return: NULL if separator == NULL, otherwise 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}
	i = 0;
	while (i <= (n - 1))
	{
		if (i == (n - 1))
		{
			result = (va_arg(args, int));
			printf("%d", result);

		}
		else if (i < (n - 1))
		{
		result = (va_arg(args, int));
		printf("%d%s", result, separator);
		}
		i = i + 1;
	}
	printf("\n");
	va_end(args);

}
