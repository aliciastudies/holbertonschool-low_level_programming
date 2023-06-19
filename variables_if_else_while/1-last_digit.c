#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - print the last digit of the number stored in the variable n
 *
 *Return: (0)
 */

int main(void)
{
	int n;
	int lstDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstDigit = n % 10;

	if (lstDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lstDigit);
	else if (lstDigit < 6 && lstDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstDigit);
	else
		printf("Last digit of %d is %d and is 0\n", n, lstDigit);

	return (0);
}
