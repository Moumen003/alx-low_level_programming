#include "main.h"

/**
* _realloc - fn name
* @ptr: wemalo
* @old_size: first
* @new_size: sec
* Return: beyrg3
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	void *new;

	if (new_size > old_size)
	{
                new = malloc(new_size);

		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)new + i) = *((char *)ptr + i);
		free(ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (new);
}
