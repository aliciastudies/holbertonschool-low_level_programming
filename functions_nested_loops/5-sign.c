#include "main.h"
/**
 *print_sign - prints the sign of a number
 *@n: the input to be checked
 *parameter: accepts the value
 *Return: 1 is > 0, return 0 == 0, return -1 if < 0
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else
	{
		_putchar('0');
		result = 0;
	}

	return (result);
}
