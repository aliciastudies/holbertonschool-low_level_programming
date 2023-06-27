#include "main.h"
/**
 *rev_string - reverses a string
 *@s: char input from user
 *Return: void
 */

void rev_string(char *s)
{
	int length;
	int swap_one;
	int swap_two;
	int temp;

	length = 0;
	while (s[length] != '\0')
	{
		length = length + 1;
	} /* when loop ends, length will hold length of string exlucing null char */
	swap_one = length - 1; /* sets to the index of the last character in the string */
			       /* and will be the starting point for swapping chars during the reverse loop  */
	swap_two = 0;
	while (swap_two < length / 2) /* reverses the string. continues until var is less than half the length */
				     /* swapping chars symmetrically, so only need to iterate until midpoint */
	{
		temp = s[swap_two];
		s[swap_two] = s[swap_one];
		s[swap_one] = temp;

		swap_one = swap_one - 1; /* traverse string from both ends towards the middle. swap_one starts at end and moves forward and swap two starts at the beginning and moves towards the end */
		swap_two = swap_two + 1;
	}
}
