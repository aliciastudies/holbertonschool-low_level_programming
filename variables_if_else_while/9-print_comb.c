#include <stdio.h>
/**
 *main - print all possible combinations of single-digit numbers
 *
 *Return: 0
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit);
		digit = digit + 1;
		if (digit <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(digit);
			digit = digit + 1;
		}
	}

	return (0);
}
