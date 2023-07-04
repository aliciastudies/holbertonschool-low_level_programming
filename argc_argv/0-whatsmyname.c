#include "main.h"
#include <stdio.h>

/**
 * main - write a program that prints its name, followed by a new line.
 * @argc: count of arguments
 * @argv: array of pointers to strings that are arguments to the function
 *
 * Return: int
 */

int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);

}

