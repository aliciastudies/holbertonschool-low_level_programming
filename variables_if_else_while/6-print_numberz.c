#include <stdio.h>
/**
 *main - prints all single digit numbers of base 10 starting from 0,
 *followed by a new line. Only using putchar twice.
 *
 *Return: 0
 */

int main(void)
{
	int singleDigit = 0;

	while (singleDigit < 10)
	{
		putchar('0' + singleDigit);
		singleDigit = singleDigit + 1;
	}

	putchar('\n');

	return (0);
}
