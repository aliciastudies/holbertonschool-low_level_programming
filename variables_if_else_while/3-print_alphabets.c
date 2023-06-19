#include <stdio.h>
/**
 *main - print the alphabet in lowercase, and then in uppercase,
 *followed by a new line
 *
 *Return: 0
 */

int main(void)
{
	int count = 0;

	while (count < 26)
	{
		putchar('a' + count);
		count = count + 1;
	}

	count = 0;

	while (count < 26)
	{
		putchar('A' + count);
		count = count + 1;
	}

	putchar('\n');

	return (0);
}


