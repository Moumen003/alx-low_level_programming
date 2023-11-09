#include "lists.h"

/**
 * free_dlistint - fn name
 * @head: ya 8adaaaar
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temproray;

	while (head)
	{
		temproray = head->next;
		free(head);
		head = temproray;
	}
}
