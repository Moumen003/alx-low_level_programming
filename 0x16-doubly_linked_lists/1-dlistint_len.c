#include "lists.h"

/**
 * dlistint_len - fn name.
 * @h: head.
 *
 * Return: eelments number.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
