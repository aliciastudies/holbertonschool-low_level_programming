#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list_t list
 * @h: pointer to list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes = nodes + 1;
		h = h->next;
	}
	return (nodes);
}
