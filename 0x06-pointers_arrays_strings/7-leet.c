#include "main.h"

/**
 * leet - sdfbvd
 * @c: sddfsz
 * Return: sdf
 */

char *leet(char *c)
{
	char *mou = c;
	char k[] = {'A', 'E', 'O', 'T', 'L'};
	int v[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(k) / sizeof(char); i++)
		{
			if (*c == k[i] || *c == k[i] + 32)
			{
				*c = 48 + v[i];
			}
		}
		c++;
	}
	return (mou);
}
