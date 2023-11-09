#include "lists.h"

/**
 * print_dlistint - fn name.
 * @h: gara eh yad
 * Return:  mynodenumber .
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t mynodenumber = 0;

	while (h)
	{
		mynodenumber++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (mynodenumber);
}
