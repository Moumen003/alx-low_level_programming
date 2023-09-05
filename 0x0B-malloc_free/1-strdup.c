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
	unsigned long int get;

	for (get = 0; get < sizeof(str); get++)
		ptr[get] = str[get];
	return (ptr);
}
