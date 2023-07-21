#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: counts arguments
 * @argv: store arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes;
	int num;
	int index;
	char *prntz_op;

	prntz_op = (char *)main;
	bytes = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	index = 0;
	while (index < bytes)
	{
		printf("%02x", prntz_op[index] & 0xFF);
		if (index < (bytes - 1))
		{
			printf(" ");
		}
		index = index + 1;
	}
	printf("\n");
	return (0);
}
