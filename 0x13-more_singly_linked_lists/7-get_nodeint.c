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

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head->next == NULL && i < index)
			return (NULL);
	}
	return (head);
}
