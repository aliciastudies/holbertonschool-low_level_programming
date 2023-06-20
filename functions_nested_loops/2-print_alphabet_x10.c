#include "main.h"
/**
 *print_alphabet_x10 - print 10 x alphabet in lowercase
 *
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet;

	while (count <= 9)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet = alphabet + 1;
		}
		_putchar('\n');
		count = count + 1;
	}

}
