#include "main.h"

/**
 *_puts_recursion - prints a string
 * @s: array to print
 * Return: 0;
 */

void _puts_recursion(char *s)
{
	unsigned char index;

	index = 0;
	if (s[index] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[index]);
	_puts_recursion(s + 1);
}
