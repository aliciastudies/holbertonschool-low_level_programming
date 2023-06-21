#include "main.h"
/**
 *print_last_digit - prints the last digit
 *@d: input to be checked
 *parameter: accepts the input
 *Return: last digit of integer
 */

int print_last_digit(int d)
{
	int lastDigit = d % 10;

	if (lastDigit < 0)
		lastDigit = lastDigit * -1;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
