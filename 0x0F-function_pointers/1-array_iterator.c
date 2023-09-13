#include "function_pointers.h"

/**
* array_iterator - fn name
* @array: we malo
* @size_t size: el feha
* @action; edy
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
