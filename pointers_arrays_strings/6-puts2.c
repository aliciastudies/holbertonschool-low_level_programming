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
	int string;


	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	string = 0;
	while (string < length)
	{
		_putchar(str[string]);
		string = string + 2;
	}

	_putchar('\n');
}
