#include "lists.h"

/**
* pop_listint - fn name
* @head: ptr to first
*
* Return: data
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (!*head || !head)
		return (0);

	node = *head;
	*head = node->next;
	n = node->n;
	free(node);
	return (n);
}
