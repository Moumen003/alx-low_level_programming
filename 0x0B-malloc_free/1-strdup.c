#include "main.h"

/**
* _strdup - fn name
* @str: input
* Return: Output
*/

char *_strdup(char *str)
{
	char *ptr = malloc(sizeof(str));

	if (ptr == 0 || str == 0)
		return (NULL);
	int i;

	for (i = 0; i < sizeof(str); i++)
		ptr[i] = str[i];
	return (ptr);
}
