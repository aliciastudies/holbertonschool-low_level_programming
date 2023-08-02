#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to a pointer to a linked list
 * @index: index of the list where node should be deleted
 *
 * Return: 1 if it succeeds, otherwise -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	dlistint_t *previous;
	unsigned int i;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (node == NULL)
		{
			return (-1);
		}
		*head = node->next;
		if (node->next != NULL)
		{
			node->next->prev = NULL;
		}
		free(node);
		return (1);
	}
	i = 0;
	while (i < index && node != NULL)
	{
		node = node->next;
		i = i + 1;
	}
	if (node == NULL)
	{
		return (-1);
	}
	previous = node->prev;
	previous->next = node->next;
	if (node->next != NULL)
	{
		node->next->prev = previous;
	}
	free(node);
	return (1);
}
