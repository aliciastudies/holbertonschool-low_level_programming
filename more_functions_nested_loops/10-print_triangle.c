#include "main.h"

/**
 *print_char - prints x amount of char to match user int input
 *@to_print: char to print
 *@how_many_times: the number of times to print char
 *Return: 0
 */

void print_char(char to_print, int how_many_times)
{
	while (how_many_times > 0)
	{
		_putchar(to_print);
		how_many_times = how_many_times - 1;
	}
}

/**
 *print_triangle - prints a triangle followed by a new line
 *@size: input from user
 *Return: 0
 */

void print_triangle(int size)
{
	int current_line;
	int size_minus_1;

	if (size <= 0)
	{
		_putchar('\n');
	}

	current_line = 1;
	size_minus_1 = size - 1;
	while (size >= current_line)
	{
		if (size >= current_line)
		{
			print_char(' ', size_minus_1);
			print_char('#', current_line);
			_putchar('\n');
		}

		current_line = current_line + 1;
		size_minus_1  = size_minus_1 - 1;

	}

}

