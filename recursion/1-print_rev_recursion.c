#include "main.h"

/**
 *_print_rev_recursion - prints a string in reverse
 * @s: array to print
 * Return: 0;
 */

void _print_rev_recursion(char *s)
{
	unsigned char index;

	index = 0;
	if (s[index] == '\0') //
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[index]); /* starts printing when recursion unwinds */
}

/**
 * Stack memory used to keep track of function calls.
 * Follows Last-In-First-Out structure. Most recently added function call
 * is the first one to be completed.
 *
 * Recursion uses stack memory to remember where it left off
 * in each recursive call
 * and goes back to previous calls until it reaches the initial recursive call
 */
