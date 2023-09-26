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
	listint_t new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	while (head->next != NULL)
		head = head->next;
	head->next = new;
	return (new);
}
