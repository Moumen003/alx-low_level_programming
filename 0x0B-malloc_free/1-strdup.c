#include "main.h"

/**
* _strdup - fn name
* @str: input
* Return: Output
*/

char *_strdup(char *str)
{
	char *ptr = malloc(sizeof(str) + 1);

	if (ptr == 0 || str == 0)
		return (NULL);

	for (; str[size] != '\0'; size++)
		ptr[get] = str[get];
	return (ptr);
}
