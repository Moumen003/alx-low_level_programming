#include "main.h"

/**
* string_nconcat - fn name
* @s1: first
* @s2: sec
* @n: third
* Return: bs ba2a
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, ls1, ls2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	ptr = malloc(ls1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
