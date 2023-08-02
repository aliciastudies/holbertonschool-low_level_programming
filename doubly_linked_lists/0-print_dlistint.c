#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list_t list
 * @h: pointer to list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	if (h == NULL)
	{
		return (0);
	}
	nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes = nodes + 1;
	}
	return (nodes);
}
