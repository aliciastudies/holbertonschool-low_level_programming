#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: integer from user
 *Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}

			n = n + 1;
		}
	}

	else if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{

				printf("%d, ", n);
			}
			n = n - 1;
		}
	}

}

