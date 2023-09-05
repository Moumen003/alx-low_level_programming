#include "main.h"

/**
* create_array - fn name
* @size: first input
* @c: input
* Return: char
*/

char *create_array(unsigned int size, char c)
{
	if (size == NULL)
		return (0);
	int i;
	char *ptr = (char *) malloc(size);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
