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
 *end_line - prints a new line
 *
 *Return: 0
 */

void end_line(void)
{
	_putchar('\n');
}

/**
 *print_square - prints a square followed by a new line
 *@size: input from user
 *Return: 0
 */

void print_square(int size)
{
	int current_line;

	if (size <= 0)
		_putchar('\n');

	current_line = 0;
	while (current_line < size)
	{
		print_char('#', size);
		end_line();
		current_line = current_line + 1;
	}
}
