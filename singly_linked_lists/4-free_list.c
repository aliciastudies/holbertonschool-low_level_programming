#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head to be freed
 *
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current;
		current = current->next;
		free(next_node->str);
		free(next_node);
	}
}
