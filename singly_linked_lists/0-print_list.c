#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 *
 * Return: the number of nodes, otherwise if str == NULL print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	if (h  == NULL)
	{
		return (0);
	}
	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes = nodes + 1;
	}
	return (nodes);

}
