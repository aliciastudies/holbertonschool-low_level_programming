#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data of a dlistint_t list
 * @head: pointer to head
 *
 * Return: sum of all data, or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	sum = 0;
	while (ptr->next != NULL)
	{
		sum = sum + (ptr->n);
		ptr = ptr->next;
	}
	sum = sum + (ptr->n);
	return (sum);
}
