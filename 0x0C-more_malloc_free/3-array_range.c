#include "main.h"

/**
* array_range - fn name
* @min: bs
* @max: yabo
* Return: 3amo
*/

int *array_range(int min, int max)
{
	int l, i;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (!ptr)
		return (NULL);
	for (i = 0; i < l; i++)
		ptr[i] = min++;
	return (ptr);
}
