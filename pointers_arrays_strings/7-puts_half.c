#include "main.h"
/**
 *puts_half - prints half of a string followed by a new line
 *@str: char input from user
 *Return: 0
 */

void puts_half(char *str)
{
	int length;
/*	int string;*/
	int length_of_the_string;
	int n;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	length_of_the_string = length / 2;
	n = (length_of_the_string - 1) / 2;
	while (length_of_the_string < length)
	{
		if (str[length_of_the_string] / 2)
		{
			_putchar(str[length_of_the_string]);
		}
		else
		{
			_putchar(str[n]);
		}
		length_of_the_string = length_of_the_string + 1;

	}

	_putchar('\n');
}
