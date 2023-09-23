#include "lists.h"

/**
* add_node_end - fn name
* @head: bs ba2a
* @str: we malo
*
* Return: check itp ut
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !end)
		return (NULL);
	if (str)
	{
		end->str = strdub(str);
		if (!end->str)
		{
			free(end);
			return (NULL);
		}
		end->len = _strlen(end->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = end;
	}
	else
		*head = end;
	return (end);
}
