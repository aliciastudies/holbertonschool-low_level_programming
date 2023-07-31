#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head
 * @str: string to be added to new node
 *
 * Return: pointer of the new element, otherwise NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
/* allocate new memory for the new node */
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
/* update pointers to add new node at the beginning */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
