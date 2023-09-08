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

	if (new_size > old_size)
	{
		unsigned int i;

		void *new = malloc(new_size);

		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*(p + i) = *(ptr + i);
		free(ptr);
		return (new);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		void *new = malloc(new_size);

		return (new);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
}
