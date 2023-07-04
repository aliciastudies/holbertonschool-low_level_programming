#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *check_digit - checks if value is digit.
 * @s: input array
 *
 * Return: 1 or 0
 */

int check_digit(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (isdigit(s[index]) != 0)
			index = index + 1;
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - write a program that adds positive numbers.
 * @argc: count of arguments
 * @argv: array of pointers to strings that are arguments to the function
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int index;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	index = 1;
	sum = 0;
	while (argv[index])
	{
		if (check_digit(argv[index]) == 1)
		{
			sum = sum + atoi(argv[index]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		index = index + 1;
	}
	printf("%i\n", sum);
	return (0);

}
