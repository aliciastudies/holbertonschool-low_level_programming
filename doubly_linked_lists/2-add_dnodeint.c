#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head
 * @n: int to be added to new node
 *
 * Return: pointer of the new element, otherwise NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head != NULL)
	{
		new_node = malloc(sizeof(*new_node));
		if (new_node == NULL)
		{
			return (0);
		}
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head != NULL)
		{
			(*head)->prev = new_node;
		}
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
