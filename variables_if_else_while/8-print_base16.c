#include <stdio.h>
/**
 *main - all the numbers of base 16 in lowercase,
 *followed by a new line using only putchar
 *
 *Return: 0
 */

int main(void)
{
	int nums = 0;
	char lets = 'a';

	while (nums < 10)
	{
		putchar('0' + nums);
		nums = nums + 1;
	}
	while (lets <= 'f')
	{
		putchar(lets);
		lets = lets + 1;
	}

	putchar('\n');

	return (0);
}
