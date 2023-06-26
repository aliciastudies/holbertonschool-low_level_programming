#include "main.h"
/**
 *puts2 - prints every other character of a string,
 *starting with the first character, followed by a new line
 *@str: char input from user
 *Return: 0
 */

void puts2(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length = length + 2;
	}

	_putchar('\n');
}
