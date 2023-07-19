#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of strings
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *result;
	va_list args;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		result = va_arg(args, char *);
		if (result == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", result);
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;

	}
	va_end(args);
	printf("\n");
}
