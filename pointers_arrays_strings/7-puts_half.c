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
	length_of_the_string = (length + 1) / 2; /* + 1 rounds up the division if length is an odd number */
	n = (length_of_the_string - 1) / 2; /* determines starting point and - 1 ensures `n` represents index of char just before midpoint  */
	while (length_of_the_string < length)
	{
		if (str[length_of_the_string] / 2) /* non-zero meansindex is odd and char is printed */
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
