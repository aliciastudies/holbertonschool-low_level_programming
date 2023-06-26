#include "main.h"
/**
 *_puts - prints a string, followed by a new line to stdout
 *@str: char input from user
 *Return: 0
 */

void _puts(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length = length + 1;
	}
	_putchar('\n');
}
