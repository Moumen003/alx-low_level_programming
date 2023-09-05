#include "main.h"

/**
* create_array - fn name
* @size: first input
* @c: input
* Return: char
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (0);

	char *ptr;
	
	ptr = (char *) malloc(size);

	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
