#include "main.h"
/**
 *print_numbers - func prints numbers from 0-9 followed by newline
 *
 *Return: void
 */

void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n + '0');
		n = n + 1;
	}

	_putchar('\n');
}

