#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head
 * @n: int to be added to new node
 *
 * Return: pointer of the new element, otherwise NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		printf("Error - malloc failed\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	last_ptr = *head;
	if (last_ptr == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_ptr->next != NULL)
	{
		last_ptr = last_ptr->next;
	}
	new_node->prev = last_ptr;
	last_ptr->next = new_node;
	return (new_node);
}
