#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node a dlistint_t list
 * @head: pointer to head
 * @index: index of the node
 *
 * Return: pointer of nth element, otherwise NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	i = 0;
	node = head;
	while (i < index)
	{
		if (node->next == NULL)
		{
			return (NULL);
		}
		node = node->next;
		i = i + 1;
	}
	return (node);
}
