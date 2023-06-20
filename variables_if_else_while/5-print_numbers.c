#include <stdio.h>
/**
*main - print all single digit numbers of base 10 starting from 0,
* followed by a new line
*
*Return: 0
*/

int main(void)
{
	int singleDigits = 0;

	while (singleDigits < 10)
	{

		printf("%d", singleDigits);
		singleDigits = singleDigits + 1;

	}

	printf("\n");

	return (0);
}
