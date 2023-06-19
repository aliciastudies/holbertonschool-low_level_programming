#include <stdio.h>
/**
 *main - print the alphabet in lowercase, followed by a new line
 *
 *Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet = alphabet + 1;
	}

	putchar('\n');

	return (0);
}
