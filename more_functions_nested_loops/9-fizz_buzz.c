#include <stdio.h>

/**
 *main - prints 1-100 followed by new line. Multiples of 3, print Fizz.
 *Multiples of 5, print Buzz. Multiples of 3 and 5, print FizzBuzz.
 *
 *Return: 0
 */

int main(void)
{
	int number;

	number = 1;
	while (number <= 100)
	{

		if (number % 3  == 0 &&  number % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", number);
		}

		number = number + 1;
	}

	printf("\n");
	return (0);
}
