#include "main.h"

/**
 * _strncpy - funtion name
 *
 * @dest: first
 * @src: take from
 * @n: how many
 *
 * Return: el yegy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
