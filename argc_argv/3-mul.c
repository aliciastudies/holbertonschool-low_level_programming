#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - write a program that prints its name, followed by a new line.
 * @argc: count of arguments
 * @argv: array of pointers to strings that are arguments to the function
 *
 * Return: print error if program does not receive two arguments, otherwise 1
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
