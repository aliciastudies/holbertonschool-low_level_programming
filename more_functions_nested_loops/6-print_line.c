#include "main.h"

/**
 * print_char - prints the number of char to current line
 * @to_print: char to print
 * @number_of_times: how many times to print char
 * Return: 0
 */

void print_char(char to_print, int number_of_times)
{

	while (number_of_times > 0)
	{
		_putchar(to_print);
		number_of_times = number_of_times - 1;
	}
}

/**
 *print_line - draws a straight line in terminal
 *@n: input from user
 *Return: void
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		print_char('_', n);
		_putchar('\n');
	}
}
