#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head
 * @str: string to be added to new node
 *
 * Return: pointer of the new element, otherwise NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_ptr = *head;
		while (last_ptr->next != NULL)
		{
			last_ptr = last_ptr->next;
		}
		last_ptr->next = new_node;
	}
	return (new_node);
}
