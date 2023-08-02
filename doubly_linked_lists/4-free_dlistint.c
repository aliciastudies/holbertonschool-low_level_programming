#include "lists.h"

/**
 * free_dlistint - frees/ releases the memory allocated for a list
 * @head: pointer to the first node of the list to free
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
