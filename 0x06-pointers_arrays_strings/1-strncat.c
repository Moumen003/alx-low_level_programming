#include "main.h"

/**
 * _strncat - function name conventates
 *
 * @dest: first pointer
 * @src: second
 * @n: third most
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int c;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + c] = src[i];
	}
	dest[c + i] = '\0';
	return (dest);
}
