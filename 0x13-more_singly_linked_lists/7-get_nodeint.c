#include "lists.h"

/**
* get_nodeint_at_index - fn name
* @head: first
* @index: wemallo
*
* Return: dont know
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	for (i = 0, node = head; node && i < index; node = node->next, i++)
		;
	return (node);
}
