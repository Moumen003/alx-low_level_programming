#include "lists.h"

/**
* free_listint2 - fn name
* @head: pointer to pointer
*
* Return: nth needed
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
