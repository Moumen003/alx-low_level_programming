#include "main.h"

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
	while (sizeof(int) * nmemb)
		*p++ = 0;
	return (p);
}
