#include "lists.h"

/**
* sum_listint - fn name
* @head: tb eh
*
* Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
