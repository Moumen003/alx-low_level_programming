#include "lists.h"

/**
 * get_dnodeint_at_index - fn name
 * @head: we malo
 * @index: shanab mo2men r8mn 3n anf farida
 *
 * Return: - NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
