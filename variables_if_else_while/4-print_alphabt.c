#include <stdio.h>
/**
 *main - print the alphabet except q and e in lowercase,
 *followed by a new line.
 *
 *Return: 0
 */

int main(void)
{
	int count = 0;
	char letter = 'a' + count;

	while (count < 26)
	{
		letter = 'a' +  count;

		if (letter != 'e' && letter != 'q')
			putchar(letter);

		count = count + 1;
	}

	putchar('\n');

	return (0);
}
