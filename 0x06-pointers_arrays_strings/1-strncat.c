#include "main.h"

/**
 * _strcpy - function name
 * @dest: first
 * @src: second
 * @n: third
 *
 * Return: the char output
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + c] == src[i];
	}
	dest[c + i] = '\0';
	return (dest);
}
