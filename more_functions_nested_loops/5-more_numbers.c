#include "main.h"
/**
 *more_numbers - prints 10 times numbers 0-14
 *
 *Return: void
 */

void more_numbers(void)
{
	int c;
	int d;

	c = 0;
	while (c < 10)
	{
		d = 0;
		while (d <= 14)
		{
			if (d >= 10 && d <= 14)
			{
				_putchar(d / 10 + '0');
			}
			_putchar(d % 10 + '0');
			d = d + 1;
		}
		_putchar('\n');
		c = c + 1;
	}
}

