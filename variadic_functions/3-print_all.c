#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_int - print integer
 * @args: list to check
 *
 * Return: 0
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints float
 * @args: list to check
 *
 * Return: 0
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_char - print char
 * @args: list to check
 *
 * Return: 0
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_str - print string
 * @args: list to check
 *
 * Return: 0
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	str == NULL ? printf("(nil)") : printf("%s", str);
}

/**
 * print_all- prints anything
 * @format: a list of arguments to compare
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list args;

	type prntz[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (prntz[j].f_type != NULL)
		{
			if (*prntz[j].f_type == format[i])
			{
				(prntz[j].f)(args);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			j = j + 1;

		}
		i = i + 1;
	}
	va_end(args);
	printf("\n");
}
