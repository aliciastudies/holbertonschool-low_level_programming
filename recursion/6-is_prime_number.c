#include "main.h"

/**
 *find_prime_number - determines if n is a prime number
 *@n: int base value
 *@i: int value to check against
 * Return: int
 */

int find_prime_number(int n, int i)
{
	if ((n % i == 0) && (n == i))
	{
		/**
		 *a prime number is a whole number greater than 1
		 * whose only factors are 1 and itself.
		 */

		return (1);
	}
	else if ((n % i == 0) && (n != i))
	{
		return (0);
	}
	else
	{
		return (find_prime_number(n, i + 1));
		/**
		 * count + 1 allows function to check the divisibility of n
		 * until it finds a divisor or reaches n
		 */
	}
}

/**
 *is_prime_number - returns 1 if the input integer is a prime number,
 *otherwise return 0
 *@n: int base value
 * Return: int
 */

int is_prime_number(int n)
{
	if (n < 2) /* numbers less than two are not prime */
	{
		return (0);
	}
	else
	{
		return (find_prime_number(n, 2));
	}
}
