#include "main.h"
/**
 *print_alphabet - print the alphabet in lowercase followed by new line
 *
 *Return: 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet = alphabet + 1;
	}

	_putchar('\n');

}
