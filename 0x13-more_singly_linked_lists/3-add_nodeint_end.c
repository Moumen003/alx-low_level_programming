#include "lists.h"

/**
* add_nodeint_end - fn name
* @head: ptr to head
* @n: new value
*
* Return: list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *node;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new;
	}
	return (new);
}
