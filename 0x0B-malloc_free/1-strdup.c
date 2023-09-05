#include "main.h"

/**
* _strdup - fn name
* @str: input
* Return: Output
*/

char *_strdup(char *str)
{
	int size;
	char *ptr;

	if (str == 0)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	;

	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
		return (NULL);
	while (size--)
		ptr[size] = str[size];
	return (ptr);
}
