#include "lists.h"

/**
* add_nodeint - fn name
* @head: name
* @n: another
*
* Return: check for it
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
