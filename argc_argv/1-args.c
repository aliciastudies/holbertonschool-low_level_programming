#include "main.h"
#include <stdio.h>

/**
 * main - write a program that prints the number of arguments passed into it,
 * followed by a new line.
 * @argc: count of arguments
 * @argv: array of pointers to strings that are arguments to the function
 *
 * Return:0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
