#include "main.h"

/**
*_memcpy - function name
*@dest: destintation
*@src: bengarab
*@n: unsigned
*
*Return: bengrb el denya
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
return (dest);
}
