#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	for  (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
