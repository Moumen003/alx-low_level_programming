#include "function_pointers.h"

/**
* int_index - fn name
* @array: wemalo
* @size: abibi
* @cmp: maloo
* Return: very impt number
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
