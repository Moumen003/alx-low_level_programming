#include "lists.h"

/**
* delete_nodeint_at_index - fn name
* @head: enta 3aref
* @index: el feha
*
* Return: 1 if success
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *prev;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev->next = node->next;
			free(node);
			return (1);
		{
		i++;
		prev = node;
		node = node->next;
	}
	return (-1);
}
