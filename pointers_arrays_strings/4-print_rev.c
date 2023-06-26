#include "main.h"

/**
 *print_rev - prints a string in reverse followed by a new line
 *@s: char input from user
 *Return: 0
 */

void print_rev(char *s)
{
	char *length;

	length = s;
	while (*length != '\0')
	{
		length = length + 1;
	}
	length = length - 1;
	while (length >= s)
	{
		_putchar(*length);
		length = length - 1;
	}
	_putchar('\n');
}
