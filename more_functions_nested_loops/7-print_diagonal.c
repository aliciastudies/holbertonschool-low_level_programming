#include "main.h"

/**
 *print_char - prints number of space according to current line
 *@to_print: character to print
 *@how_many_times: how many times to print char
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
 *end_diagonal - prints backslash and new line
 *
 *Return: 0
 */
void end_diagonal(void)
{
	_putchar('\\');
	_putchar('\n');
}

/**
 *print_diagonal - draws a diagonal line in the terminals
 *@n: input from user
 *
 *Return: 0
 */

void print_diagonal(int n)
{
	int current_line;

	if (n <= 0)
		_putchar('\n');

	current_line = 0;
	while (current_line < n)
	{
		print_char(' ', current_line);
		end_diagonal();
		current_line = current_line + 1;
	}
}
