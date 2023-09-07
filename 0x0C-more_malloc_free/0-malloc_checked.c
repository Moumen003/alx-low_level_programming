#include "main.h"

/**
* malloc_checked - fn name
* @b: int
* Return: bs keda
*/

void *malloc_checked(unsigned int b)
{
	int *bs = malloc(b);

	if (bs == 0)
		exit(98);

	return (bs);
}
