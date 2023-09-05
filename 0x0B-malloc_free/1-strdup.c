#include "main.h"

/**
* _strdup - fn name
* @str: input
* Return: Output
*/

char *_strdup(char *str)
{
	int size;
	char *ptr = malloc(sizeof(str));

	if (ptr == 0 || str == 0)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		ptr[size] = str[size];
	return (ptr);
}
