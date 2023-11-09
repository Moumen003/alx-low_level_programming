#include "lists.h"

/**
 * delete_dnodeint_at_index - fn name
 * @head: bs ab2a
 * @index: ya wala
 * Return: Success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temproray = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temproray == NULL)
			return (-1);
		temproray = temproray->next;
	}

	if (temproray == *head)
	{
		*head = temproray->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temproray->prev->next = temproray->next;
		if (temproray->next != NULL)
			temproray->next->prev = temproray->prev;
	}

	free(temproray);
	return (1);
}
