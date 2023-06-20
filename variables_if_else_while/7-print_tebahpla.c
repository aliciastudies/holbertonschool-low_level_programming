#include <stdio.h>
/**
 *main - print the lowercase laphabet in reverse followed by newline
 *using only putchar twice
 *
 *Return: 0
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet = alphabet - 1;
	}

	putchar('\n');

	return (0);
}
