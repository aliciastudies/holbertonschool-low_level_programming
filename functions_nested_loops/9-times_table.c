#include "main.h"
/**
 *times_table - prints the 9 tables, starting with 0
 *
 *Return: 0
 */

void times_table(void)
{
	int first = 0;
	int second = 0;
	int combo;

	while (first <= 9)
	{
		while (second <= 9)
		{
			combo = first * second;
			if (combo <= 9 && second > 0)
			{

				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(combo + '0');
			}
			else if (combo >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(combo / 10 + '0');
				_putchar(combo % 10 + '0');
			}
			else if (second == 0)
			{
				_putchar(combo + '0');
			}

			second = second + 1;
		}
		_putchar('\n');
		first  = first + 1;
		second = 0;
	}
}

