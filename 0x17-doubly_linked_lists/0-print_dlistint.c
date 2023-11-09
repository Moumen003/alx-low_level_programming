#include "lists.h"

/**
* print_dlistint - fn name
* @h: bs ba2a
*
* Return: we malo ya gameel
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
