#include "main.h"

/**
* _memset -bs ba2a
* @s: we malo
* @b: k
* @n: bs
* Return: abooooyAA
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
* _calloc - fn name is bery nice
* @nmemb: bos
* @size: shoof
* Return: batee5
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);

	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
