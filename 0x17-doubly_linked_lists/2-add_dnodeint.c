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
	dlistint_t *mynew;

	mynew = malloc(sizeof(dlistint_t));
	if (mynew == NULL)
		return (NULL);

	mynew->n = n;
	mynew->prev = NULL;
	mynew->next = *head;
	if (*head != NULL)
		(*head)->prev = mynew;
	*head = mynew;

	return (mynew);
}
