#include "lists.h"

/**
 * sum_dlistint - fn
 * @head: like 
 *
 * Return: we malo
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
