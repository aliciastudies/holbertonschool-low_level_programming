#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to a linked list
 * @idx: index of the list where node should be added
 * @n: element to be added
 *
 * Return: pointer of new node, otherwise NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr;
	dlistint_t *end;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	ptr = *h;
	while (i < (idx - 1))
	{
		if (ptr->next == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
		i = i + 1;
	}
	end = ptr->next;
	if (ptr->next == NULL)
	{
		return (add_dnodeint_end(&ptr, n));
	}
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	ptr->next = new_node;
	end->prev = ptr;
	new_node->next = end;

	return (new_node);
}
