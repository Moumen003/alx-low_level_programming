#include "lists.h"

/**
 * add_dnodeint - bs ba2at.
 * @head: istint_t list.
 * @n: The n
 *
 * Return: If the function fails - NULL.
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n;

	n = malloc(sizeof(dlistint_t));
	if (n == NULL)
		return (NULL);

	n->n = n;
	n->prev = NULL;
	n->next = *head;
	if (*head != NULL)
		(*head)->prev = n;
	*head = n;

	return (n);
}
