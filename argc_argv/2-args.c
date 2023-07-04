#include "main.h"
#include <stdio.h>

/**
 * main - write a program that prints all arguments it recieves
 * @argc: count of arguments
 * @argv: array of pointers to strings that are arguments to the function
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int index;

	index = 0;
	while (argv[index] != argv[argc])
	{
		printf("%s\n", argv[index]);
		index = index + 1;
	}
	return (0);

}
